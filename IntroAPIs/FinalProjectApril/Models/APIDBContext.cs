using Microsoft.EntityFrameworkCore;
using System.Diagnostics.CodeAnalysis;
using API_test.Models;

namespace API_test.Models
{
    public class APIDBContext : DbContext
    {
        protected readonly IConfiguration Configuration;

        public APIDBContext(DbContextOptions<APIDBContext> options, IConfiguration configuration) : base(options)
        {
            Configuration = configuration;
        }

        protected override void OnConfiguring(DbContextOptionsBuilder options)
        {
            //var connectionString = Configuration.GetConnectionString("PrescriptionAPI");
            var connectionString = "Server=localhost;Port=3306;Database=Prescriptions;USER=root;password=Sceptile2403";
            options.UseMySql(connectionString, ServerVersion.AutoDetect(connectionString));
        }
        public DbSet<personalprescription> personalprescription { get; set; } = null!;
        public DbSet<generalprescription> generalprescription { get; set; } = null!;
    }
}
