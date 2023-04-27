using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using Microsoft.AspNetCore.Http;
using Microsoft.AspNetCore.Mvc;
using Microsoft.EntityFrameworkCore;
using API_test.Models;

namespace API_test.Models.Controllers
{
    [Route("api/[controller]")]
    [ApiController]
    public class PrescriptionController : ControllerBase
    {
        private readonly APIDBContext _context;

        public PrescriptionController(APIDBContext context)
        {
            _context = context;
        }

        // GET: api/Prescription
        [HttpGet]
        public async Task<ActionResult<Response>> GetPrescriptions()
        {
            var response = new Response();

            try
            {
                response.Personal = await _context.personalprescription.ToListAsync();
                response.General = await _context.generalprescription.ToListAsync();

                response.StatusCode = 200;
                response.StatusDescription = "Success";
            }
            catch (Exception ex)
            {
                response.StatusCode = 500;
                response.StatusDescription = "Internal Server Error";
            }

            return response;
        }

        // GET: api/Prescription/5
        [HttpGet("{id}")]
        public async Task<ActionResult<Response>> GetPrescription(int id)
        {
            var response = new Response();

            try
            {
                var prescription = await _context.personalprescription.FindAsync(id);

                if (prescription == null)
                {
                    response.StatusCode = 404;
                    response.StatusDescription = "Not Found";
                }
                else
                {
                    response.Personal.Add(prescription);
                    response.StatusCode = 200;
                    response.StatusDescription = "Success";
                }
            }
            catch (Exception ex)
            {
                response.StatusCode = 500;
                response.StatusDescription = "Internal Server Error";
            }

            return response;
        }

        // PUT: api/Prescription/5
        // To protect from overposting attacks, see https://go.microsoft.com/fwlink/?linkid=2123754
        [HttpPut("{id}")]
        public async Task<ActionResult<Response>> PutPrescription(int id, personalprescription prescription)
        {
            var response = new Response();

            try
            {
                if (id != prescription.PrescriptionId)
                {
                    response.StatusCode = 400;
                    response.StatusDescription = "Bad Request";
                    return response;
                }

                _context.Entry(prescription).State = EntityState.Modified;
                await _context.SaveChangesAsync();

                response.StatusCode = 204;
                response.StatusDescription = "No Content";
            }
            catch (DbUpdateConcurrencyException)
            {
                if (!PrescriptionExists(id))
                {
                    response.StatusCode = 404;
                    response.StatusDescription = "Not Found";
                }
                else
                {
                    response.StatusCode = 500;
                    response.StatusDescription = "Internal Server Error";
                }
            }

            return response;
        }

        // POST: api/Prescription
        // To protect from overposting attacks, see https://go.microsoft.com/fwlink/?linkid=2123754
        [HttpPost]
        public async Task<ActionResult<Response>> PostPrescription(personalprescription prescription)
        {
            var response = new Response();

            try
            {
                if (_context.personalprescription == null)
                {
                    response.StatusCode = 500;
                    response.StatusDescription = "Internal Server Error: Entity set 'APIDBContext.personalprescription' is null";
                    return response;
                }

                _context.personalprescription.Add(prescription);
                await _context.SaveChangesAsync();

                response.StatusCode = 201;
                response.StatusDescription = "Created";
                response.Personal.Add(prescription);
            }
            catch (Exception ex)
            {
                response.StatusCode = 500;
                response.StatusDescription = "Internal Server Error: " + ex.Message;
            }

            return response;
        }

        // DELETE: api/Prescription/5
        [HttpDelete("{id}")]
        public async Task<ActionResult<Response>> DeletePrescription(int id)
        {
            var response = new Response();

            try
            {
                if (_context.personalprescription == null)
                {
                    response.StatusCode = 500;
                    response.StatusDescription = "Internal Server Error: Entity set 'APIDBContext.personalprescription' is null";
                    return response;
                }

                var prescription = await _context.personalprescription.FindAsync(id);
                if (prescription == null)
                {
                    response.StatusCode = 404;
                    response.StatusDescription = "Not Found: Prescription with ID " + id + " not found.";
                    return response;
                }

                _context.personalprescription.Remove(prescription);
                await _context.SaveChangesAsync();

                response.StatusCode = 204;
                response.StatusDescription = "No Content";
            }
            catch (Exception ex)
            {
                response.StatusCode = 500;
                response.StatusDescription = "Internal Server Error: " + ex.Message;
            }

            return response;
        }

        private bool PrescriptionExists(int id)
        {
            return (_context.personalprescription?.Any(e => e.PrescriptionId == id)).GetValueOrDefault();
        }
    }
}