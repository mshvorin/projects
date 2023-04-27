import logo from "./logo.svg";
import React from "react";
import ReactDOM from "react-dom/client";
import { useState } from "react";
import "./App.css";
const { Configuration, OpenAIApi } = require("openai");

const configuration = new Configuration({
  apiKey: "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",
});

const openai = new OpenAIApi(configuration);

async function getResponse(Query) {
  const response = await openai.createCompletion({
    model: "text-davinci-002",
    prompt: Query,
    max_tokens: 60,
  });

  return response.data.choices[0].text;
}

async function getImage(Query) {
  const response = await openai.createImage({
    prompt: Query,
    n: 1,
    size: "1024x1024",
  });

  var image_url = response.data.data[0].url;
  console.log(image_url);
  return image_url;
}

function App() {
  //const [text, setText] = useState("");
  const [text, setText] = useState("");
  const [question, setQuestion] = useState("");
  //const [imgtext, setImageText] = useState('');
  const [Image, setImage] = useState("");

  class NameForm extends React.Component {
    constructor(props) {
      super(props);
      this.state = { value: "" };

      this.handleChange = this.handleChange.bind(this);
      this.handleSubmit = this.handleSubmit.bind(this);
    }

    handleChange(event) {
      this.setState({ value: event.target.value });
      event.preventDefault();
    }

    async handleSubmit(event) {
      event.preventDefault();
      var response = await getResponse(this.state.value);
      setText(response);
      setQuestion(this.state.value);
      console.log(response);
    }

    resetPage() {
      window.location.reload();
    }

    render() {
      return (
        <form onSubmit={this.handleSubmit}>
          <label>
            <input
              type="text"
              value={this.state.value}
              onChange={this.handleChange}
            />
          </label>
          <input type="submit" value="Submit" />
          <br></br>
          <div>
            <br></br>
            {text}
          </div>
        </form>
      );
    }
  }

  function resetText() {
    text = "";
  }

  class ResetButton extends React.Component {
    constructor(props) {
      super(props);
      this.state = { value: "" };
      this.handleChange = this.handleChange.bind(this);
      this.handleReset = this.handleChange.bind(this);
    }

    handleChange(event) {
      this.setState({ value: event.target.value });
      event.preventDefault();
    }

    handleReset(event) {
      event.preventDefault();
      console.log("Done");
      text = "";
    }

    render() {
      return (
        <form>
          <button onClick={resetText}> Refresh Text </button>
        </form>
      );
    }
  }

  class ImageButton extends React.Component {
    constructor(props) {
      super(props);
      this.state = { value: "" };

      this.handleChange = this.handleChange.bind(this);
      this.handleSubmit = this.handleSubmit.bind(this);
    }

    handleChange(event) {
      this.setState({ value: event.target.value });
      event.preventDefault();
    }

    async handleSubmit(event) {
      event.preventDefault();
      var responsee = await getImage(this.state.value);
      setImage(responsee);
      console.log(responsee);
      //setImageText(this.state.value);
    }

    render() {
      return (
        <form onSubmit={this.handleSubmit}>
          <label>
            <input
              type="text"
              value={this.state.value || ""}
              onChange={this.handleChange}
            />
          </label>
          <input type="submit" value="Submit" />
          <div>
            <img src={Image} alt="" />
          </div>
        </form>
      );
    }
  }

  return (
    <div className="App">
      <header className="App-header">
        <p>Input your query here!</p>
        <div className="question">{question}</div>
        <br></br>
        <NameForm />
        <br></br>
        <br></br>
        <br></br>
        <p> Generate an Image! </p>
        <br></br>
        <ImageButton />
        <br></br>
        <br></br>
        <br></br>
        <br></br>
        <br></br>
        <br></br>
        <ResetButton />
      </header>
    </div>
  );
}

export default App;
