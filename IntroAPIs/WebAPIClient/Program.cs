// See https://aka.ms/new-console-template for more information
using System;
using System.Threading.Tasks;
using System.Net.Http;
using Newtonsoft.Json;
using System.Collections.Generic;
using System.Runtime.CompilerServices;

namespace WebAPIClient
{ 
    class RandomJokes
    {
        [JsonProperty("setup")]
        public string Setup { get; set; }

        [JsonProperty("punchline")]
        public string Punchline { get; set; }
        
        [JsonProperty("type")]
        public string Type { get; set; }

    }
    
    class DadJokes
    {

        [JsonProperty("joke")]
        public string Joke { get; set; }

    }
    
    class Program
    {
        static async Task Main(string[] args)
        {
            await ProcessRepositories();
        }

        private static readonly HttpClient client = new HttpClient();

        private static async Task ProcessRepositories()
        {
            while (true)
            {
                try
                {
                    var result = await client.GetAsync("https://official-joke-api.appspot.com/random_joke");
                    Console.WriteLine("Would you like a random joke or a dad joke? (Enter Random or Dad) : \n");
                    
                    var Response = Console.ReadLine();

                    if (string.IsNullOrEmpty(Response))
                    {
                        break;
                    }
                    else if (Response.ToLower() == "random") {
                        result = await client.GetAsync("https://official-joke-api.appspot.com/random_joke");
                        var resultRead = await result.Content.ReadAsStringAsync();
                        var answer = JsonConvert.DeserializeObject<RandomJokes>(resultRead);
                        Console.WriteLine("--------\n");
                        Console.WriteLine(answer.Setup + "..." + answer.Punchline);
                        Console.WriteLine("\n--------\n");
                    }
                    else if (Response.ToLower() == "dad") {
                        client.DefaultRequestHeaders.Add("Accept", "application/json");
                        result = await client.GetAsync("https://icanhazdadjoke.com/");
                        var resultRead = await result.Content.ReadAsStringAsync();
                        var answer = JsonConvert.DeserializeObject<DadJokes>(resultRead);
                        Console.WriteLine("--------\n");
                        Console.WriteLine(answer.Joke);
                        Console.WriteLine("\n--------\n");
                    }
                
                }
                catch (Exception)
                {
                    Console.WriteLine("Incorrect input. Please try again.");
                }
            }
        }
    }
}