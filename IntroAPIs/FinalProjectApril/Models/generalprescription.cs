using System;
using System.ComponentModel.DataAnnotations;

namespace API_test.Models
{
    public class generalprescription
    {
        [Key]
        public int PrescriptionId { get; set; }
        public string? DrugName { get; set; }
        public int? TypicalDosageInMG { get; set; }
        public int DrugID { get; set; }
        public string? GeneralInstructions { get; set; }
    }
}
