using System;
using static System.Runtime.InteropServices.JavaScript.JSType;

namespace API_test.Models
{
        public class Response
    {
        public int StatusCode { get; set; }
        public string? StatusDescription { get; set; }
        public List<personalprescription> Personal { get; set; } = new List<personalprescription>();
        public List<generalprescription> General { get; set; } = new List<generalprescription>();

    }
}