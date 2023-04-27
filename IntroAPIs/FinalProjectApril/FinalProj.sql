CREATE DATABASE  IF NOT EXISTS `prescriptions` /*!40100 DEFAULT CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci */ /*!80016 DEFAULT ENCRYPTION='N' */;
USE `prescriptions`;
-- MySQL dump 10.13  Distrib 8.0.32, for Win64 (x86_64)
--
-- Host: 127.0.0.1    Database: prescriptions
-- ------------------------------------------------------
-- Server version	8.0.33

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!50503 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `generalprescription`
--

DROP TABLE IF EXISTS `generalprescription`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `generalprescription` (
  `PrescriptionId` int NOT NULL AUTO_INCREMENT,
  `DrugName` varchar(1000) NOT NULL,
  `TypicalDosageInMG` int DEFAULT NULL,
  `DrugID` int NOT NULL,
  `GeneralInstructions` varchar(1000) DEFAULT NULL,
  PRIMARY KEY (`PrescriptionId`)
) ENGINE=InnoDB AUTO_INCREMENT=6 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `generalprescription`
--

LOCK TABLES `generalprescription` WRITE;
/*!40000 ALTER TABLE `generalprescription` DISABLE KEYS */;
INSERT INTO `generalprescription` VALUES (1,'Aspirin',500,1001,'Take with food'),(2,'Ibuprofen',200,1002,'Take with water'),(3,'Acetaminophen',650,1003,'Do not exceed recommended dosage'),(4,'Naproxen',250,1004,'Take with food or milk'),(5,'Loratadine',10,1005,'Take once a day with or without food');
/*!40000 ALTER TABLE `generalprescription` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `personalprescription`
--

DROP TABLE IF EXISTS `personalprescription`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `personalprescription` (
  `PrescriptionId` int NOT NULL AUTO_INCREMENT,
  `NameOfPerson` varchar(255) NOT NULL,
  `ExpirationDate` varchar(255) DEFAULT NULL,
  `DirectionsWithDosage` varchar(255) DEFAULT NULL,
  `ConcentrationMG` int DEFAULT NULL,
  PRIMARY KEY (`PrescriptionId`,`NameOfPerson`),
  CONSTRAINT `personalprescription_ibfk_1` FOREIGN KEY (`PrescriptionId`) REFERENCES `generalprescription` (`PrescriptionId`)
) ENGINE=InnoDB AUTO_INCREMENT=6 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `personalprescription`
--

LOCK TABLES `personalprescription` WRITE;
/*!40000 ALTER TABLE `personalprescription` DISABLE KEYS */;
INSERT INTO `personalprescription` VALUES (1,'John Doe','2023-08-01','Take 1 tablet twice a day',500),(2,'Jane Doe','2024-05-15','Take 2 tablets with food',250),(3,'Bob Smith','2023-12-31','Take 1 capsule every 6 hours',100),(4,'Alice Jones','2025-01-01','Take 1 tablet every day',200),(5,'Tom Williams','2024-06-30','Take 1 tablet as needed for pain',300);
/*!40000 ALTER TABLE `personalprescription` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2023-04-26 22:55:46
