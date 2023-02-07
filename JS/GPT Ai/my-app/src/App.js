import logo from './logo.svg';
import React from 'react'
import ReactDOM from 'react-dom/client'
import { useState } from 'react';
import './App.css';
const { Configuration, OpenAIApi } = require("openai");

const configuration = new Configuration({
    apiKey: "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"
  });

const openai = new OpenAIApi(configuration);

async function getResponse(Query) {

 const response = await openai.createCompletion({
    model: "text-davinci-002",
    prompt: Query,
    max_tokens: 60
  });
  
  return response.data.choices[0].text
 }

const root = ReactDOM.createRoot(document.getElementById('root'));

function App() {
  //const [text, setText] = useState("");
  const [text, setText] = useState("");
  const [question, setQuestion] = useState("");


  class NameForm extends React.Component {
  
    constructor(props) {
      super(props);
      this.state = {value: ''};
  
      this.handleChange = this.handleChange.bind(this);
      this.handleSubmit = this.handleSubmit.bind(this);
    }
  
    handleChange(event) {
      this.setState({value: event.target.value});
      event.preventDefault();
    }
  
    async handleSubmit(event) {
  
      event.preventDefault();
      var response = (await getResponse(this.state.value));
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
            <input type="text" value={this.state.value} onChange={this.handleChange} />
          </label>
          <input type="submit" value="Submit" />
          <div>
            {text}
          </div>
        </form>
        
      );
    }
  }

  function resetText() {
    text = ""
  }

  class ResetButton extends React.Component {

    constructor(props) {
      super(props);
      this.state = {value: ''};
  
      this.handleChange = this.handleChange.bind(this);
      this.handleReset = this.handleChange.bind(this);

    }
  
    handleChange(event) {
      this.setState({value: event.target.value});
      event.preventDefault();
    }

    handleReset(event) {
      event.preventDefault();
      console.log("Done")
      text=""
    }

    render () {
      return(
        <form>
      <button onClick={resetText}> Refresh Text </button>
        </form>
      );
    }
  }

  return (
    <div className="App">
      <header className="App-header">
        <p>
          Input your query here!
        </p>
        <div classname="question">
          {question}
        </div>
        <NameForm />
        <br></br>
        <br></br>
        <br></br>
        <br></br>
        <br></br>

        <ResetButton />
        
        <a
          className="App-link"
          href="https://r eactjs.org"
          target="_blank"
          rel="noopener noreferrer"
        >
        </a>
      </header>
    </div>
  );
}

export default App;