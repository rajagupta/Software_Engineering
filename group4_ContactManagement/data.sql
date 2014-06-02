CREATE DATABASE  IF NOT EXISTS `try1` /*!40100 DEFAULT CHARACTER SET utf8 */;
USE `try1`;
-- MySQL dump 10.13  Distrib 5.6.13, for Win32 (x86)
--
-- Host: localhost    Database: try1
-- ------------------------------------------------------
-- Server version	5.6.16

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `contacts`
--

DROP TABLE IF EXISTS `contacts`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `contacts` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `first_name` varchar(45) DEFAULT 'NONE',
  `last_name` varchar(45) DEFAULT 'NONE',
  `mobile_1` varchar(45) DEFAULT '0',
  `mobile_2` varchar(45) DEFAULT '0',
  `landline` varchar(45) DEFAULT '0',
  `user_id` varchar(45) DEFAULT 'NONE',
  `status` varchar(45) DEFAULT '1',
  `address` varchar(1000) DEFAULT 'NONE',
  `birth_day` varchar(100) DEFAULT 'NONE',
  `aniversary` varchar(100) DEFAULT 'NONE',
  `fax` varchar(45) DEFAULT '0',
  `imp_date` varchar(100) DEFAULT 'NONE',
  `note_date` varchar(1000) DEFAULT 'NONE',
  `custom_info` varchar(1000) DEFAULT 'NONE',
  `del` int(11) DEFAULT '0',
  `designation` varchar(45) DEFAULT 'NONE',
  `grp` varchar(45) DEFAULT 'NONE',
  `safefilename` varchar(45) DEFAULT 'NONE',
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=15 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `contacts`
--

LOCK TABLES `contacts` WRITE;
/*!40000 ALTER TABLE `contacts` DISABLE KEYS */;
INSERT INTO `contacts` VALUES (1,'','hello','23432','234','234234','radhika','1','ahgkh','asdg','fdfd','0','fdgs','dfgs','fdgsd',0,'sgdfgs','NONE','NONE'),(2,'raghav','patodiya','342','23435','23545','sankalp','1','dfgsdfg','fdgf','fgfds','0','gfds','gs','sdfgfg',0,'dfgsd','NONE','NONE'),(3,'priya','patodiya','345','34654','32543','radhika','1','dsfgdg','fdhgsdf','dfgsf','0','dsffdg','fgg','fdgds',1,'fgsfg','NONE','NONE'),(4,'alkesh','alkesh','4545','858','9797','radhika','1','awekt3498','adfgfd','dfgsdf','0','gfd','dfgdfg','dfgs',0,'fdgsdf','NONE','NONE'),(5,'aerbgk','rad','354','75765','867698','','1','','Friday, March 07, 2014','dsf','0','asdf','NONE','NONE',0,'NONE','NONE','NONE'),(6,'','','234626547','547566','456','radhika','1','','Friday, March 07, 2014','Friday, March 07, 2014','5656','Friday, March 07, 2014','','',0,'','NONE','NONE'),(8,'Family','gfj','5665','6','658','radhika','1','','Friday, March 07, 2014','Friday, March 07, 2014','6785','Friday, March 07, 2014','','',0,'','Friends','NONE'),(9,'skrgjhehg','','0','0','0','radhika','1','','','','0','','','',0,'','None','NONE'),(10,'','hello','23432','234','234234','sankalp','1','ahgkh','asdg','fdfd','0','fdgs','dfgs','fdgsd',0,'sgdfgs','NONE','NONE'),(11,'priya','patodiya','345','34654','32543','sankalp','1','dsfgdg','fdhgsdf','dfgsf','0','dsffdg','fgg','fdgds',0,'fgsfg','NONE','NONE'),(12,'alkesh','alkesh','4545','858','9797','sankalp','1','awekt3498','adfgfd','dfgsdf','0','gfd','dfgdfg','dfgs',0,'fdgsdf','NONE','NONE'),(13,'twt435','','3453226','0','0','radhika','1','','','','0','','','',0,'','None','76f49514-1a3d-4f21-bb15-dd0f07ce7423_7.jpg'),(14,'ergsegv','','8734658732','0','0','radhika','1','','','','0','','','',0,'','None','119702pw150.jpg');
/*!40000 ALTER TABLE `contacts` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `login`
--

DROP TABLE IF EXISTS `login`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `login` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `name` varchar(45) DEFAULT NULL,
  `password` varchar(45) DEFAULT NULL,
  `first_name` varchar(45) DEFAULT NULL,
  `last_name` varchar(45) DEFAULT NULL,
  `security` varchar(100) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=14 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `login`
--

LOCK TABLES `login` WRITE;
/*!40000 ALTER TABLE `login` DISABLE KEYS */;
INSERT INTO `login` VALUES (1,'radhika','rad','Radhika','Patodiya','rad'),(2,'sankalp','sankalp','sankalp','sankalp','san'),(3,'himanshu','himanshu','cartoon','him','him'),(4,'raja','raja','raj','raj','raj'),(5,'uday','uday','uday','u','ad'),(6,'bhanuja','bhanuja','bhanu','bhanu','bhanu'),(7,'priya','priya','Priya','Priya','p'),(8,'ameya','ameya','Maeya','Sawant','a'),(9,'shreya','ameya','shreya','raina','sh'),(10,'pato','radhika','radhika','radhika','pato'),(11,'pats','a','radhika','radhika','pat'),(12,'ljg','a','','','fgndf'),(13,'rad','rad','rad','rad','rad');
/*!40000 ALTER TABLE `login` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `temp`
--

DROP TABLE IF EXISTS `temp`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `temp` (
  `id` int(11) NOT NULL DEFAULT '1000',
  `too` varchar(45) DEFAULT NULL,
  `frome` varchar(45) DEFAULT NULL,
  `first_name` varchar(45) DEFAULT NULL,
  `last_name` varchar(45) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `temp`
--

LOCK TABLES `temp` WRITE;
/*!40000 ALTER TABLE `temp` DISABLE KEYS */;
/*!40000 ALTER TABLE `temp` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2014-03-09 23:55:39
