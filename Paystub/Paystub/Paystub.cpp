// Paystub.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <string>
#include <fstream>
using namespace std;



int main()
{
	int FederalTax = 15;
	int StateTax = 0;
	double SocialTax = 5.75;
	double MediTax = 2.75;
	int Pension = 5;
	double HealthInsurance = 75.00;
	double GrossAmount = HealthInsurance * MediTax * Pension;
	string name = " ";


	
	
	
    return 0;
}

