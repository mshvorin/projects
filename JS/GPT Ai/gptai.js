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