using System;
using System.ComponentModel.DataAnnotations;
using static System.Runtime.InteropServices.JavaScript.JSType;

namespace API_test.Models
{
        public class personalprescription
    {
        [Key]
        public int PrescriptionId { get; set; }
        public string? NameOfPerson { get; set; }
        public string? ExpirationDate { get; set; }
        public string? DirectionsWithDosage { get; set; }
        public int? ConcentrationMG { get; set; }
    }
}