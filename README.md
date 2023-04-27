# README

This repository contains two tables for storing prescription information - `generalprescription` and `personalprescription`. 

## Endpoints

The following endpoints can be used to interact with the prescription data:

### `GET /generalprescriptions`

Retrieves a list of all general prescriptions in the database.

### `GET /personalprescriptions`

Retrieves a list of all personal prescriptions in the database.

### `POST /generalprescriptions`

Adds a new general prescription to the database. The request body should be a JSON object with the following fields:

- `DrugName` (string, optional): the name of the drug being prescribed.
- `TypicalDosageInMG` (integer, optional): the typical dosage in milligrams for the prescribed drug.
- `DrugID` (integer, required): the ID of the drug being prescribed.
- `GeneralInstructions` (string, optional): any general instructions for taking the prescribed drug.

### `POST /personalprescriptions`

Adds a new personal prescription to the database. The request body should be a JSON object with the following fields:

- `NameOfPerson` (string, optional): the name of the person the prescription is for.
- `ExpirationDate` (string, optional): the expiration date of the prescription.
- `DirectionsWithDosage` (string, required): the directions for taking the prescribed drug, including the dosage.
- `ConcentrationMG` (integer, optional): the concentration of the drug in milligrams.

### `GET /generalprescriptions/{id}`

Retrieves the details of a specific general prescription, identified by its `PrescriptionId`.

### `GET /personalprescriptions/{id}`

Retrieves the details of a specific personal prescription, identified by its `PrescriptionId`.

### `PUT /generalprescriptions/{id}`

Updates the details of a specific general prescription, identified by its `PrescriptionId`. The request body should be a JSON object with the same fields as the `POST /generalprescriptions` endpoint.

### `PUT /personalprescriptions/{id}`

Updates the details of a specific personal prescription, identified by its `PrescriptionId`. The request body should be a JSON object with the same fields as the `POST /personalprescriptions` endpoint.

### `DELETE /generalprescriptions/{id}`

Deletes a specific general prescription, identified by its `PrescriptionId`.

### `DELETE /personalprescriptions/{id}`

Deletes a specific personal prescription, identified by its `PrescriptionId`.


## Sample Request and Response Bodies

### Sample Request Body for `POST /generalprescriptions` Endpoint

```
{
    "DrugName": "Ibuprofen",
    "TypicalDosageInMG": 400,
    "DrugID": 123,
    "GeneralInstructions": "Take with food"
}
```
Sample Response Body for GET /personalprescriptions Endpoint

```
[
    {
        "PrescriptionId": 1,
        "NameOfPerson": "John Doe",
        "ExpirationDate": "2023-06-30",
        "DirectionsWithDosage": "Take 1 tablet every 6 hours",
        "ConcentrationMG": 200
    },
    {
        "PrescriptionId": 2,
        "NameOfPerson": "Jane Smith",
        "ExpirationDate": "2024-02-28",
        "DirectionsWithDosage": "Take 2 tablets once a day",
        "ConcentrationMG": 500
    }
]
```
