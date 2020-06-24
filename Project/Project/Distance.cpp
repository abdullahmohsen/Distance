#include "Distance.h"
#include <iostream>
using namespace std;

void Distance::setM(int meter)
{
	m = meter;
}
int Distance::getM()
{
	return m;
}

void Distance::setCM(int centi)
{
	cm = centi;
}
int Distance::getCM()
{
	return cm;
}

//Method Overloading
void Distance::add(int a)
{
	m += a;
}
void Distance::add(int a, int b)
{
	m += a;
	cm += b;
	//Do if condition bec. if the cm = 90 & b = 20 then cm = 110
	if (cm >= 100)
	{
		m++;
		cm -= 100;
	}
}

//Binary Operator Overloading
Distance Distance::operator+(Distance d2)
{
	Distance result;
	result.m = m + d2.getM();
	result.cm = cm + d2.getCM();
	if (result.cm >= 100)
	{
		result.m++;
		result.cm -= 100;
	}
	return result;
}

Distance Distance::operator++()
{
	m++;
	Distance result;
	result.m = m;
	result.cm = cm;
	return result;
}

void Distance::print()
{
	cout << m << '.' << cm << endl;
}
