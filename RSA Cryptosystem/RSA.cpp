/*
 * RSA.cpp
 *
 *  Created on: Jan 31, 2016
 *      Authors: Tony Bailey, Brandon Watson, Tony Dalton
 */

#include <iostream>
#include <math.h>
#include <string.h>
#include <stddef.h>


using namespace std;


bool PrimeTest(int);

int main()
{

	return 0;
}

//naive algorithm for determining if a number is prime.
//Loops from 2 to sqrt(n) and checks if n is divisible
//by those numbers
bool PrimeTest(int n)
{
	for(int i = 2; i <= sqrt(n); i++)
	{
		if (n%i == 0)
			return false;
	}
	return true;
}
