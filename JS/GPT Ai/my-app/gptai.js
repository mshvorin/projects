
import './index.css'

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

  console.log(response.data.choices[0].text)
}

getResponse("How do i cook al dente pasta?")