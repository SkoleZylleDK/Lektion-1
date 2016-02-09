// Projekt		2. semester exercises
//
// Fil			Vehicle.h
//
// Beskrivelse	Definition of class Vehicle
//
// Forfatter	xx
//
// Version		1.0 - xxxxxx - originally version

#pragma once

#include <iostream>
#include <string>
#include "Date.h"
#include "Name.h"

using namespace std;


class Vehicle
{
public:
	Vehicle( string model, char fuel, int weight );
	void printCertificate();
	void setOwner(string firstName, string sirName);
	bool setRegDate(int day, int month, int year);
	bool setRegNr(string);
private:
	Name owner_;
	Date regDate_;
	string model_;		// No limitations
	char fuel_;			// Valid values: 'B'(Benzin), 'D'(Diesel) and 'X'(unknown type). Default: 'X' 
	int weight_;		// Valid values: positive numbers. Default: 0
	string regNr_;		// Valid values: exactly 7 chararters
						//				 first 2 characters: capital letters
						//				 next 5 characters: numbers 0 to 9
						//				 Default: "XX00000"
	bool checkRegNr();
}