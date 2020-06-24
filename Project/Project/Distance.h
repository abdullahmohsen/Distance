#pragma once
class Distance
{
private:
	int m, cm;

public:
	void setM(int meter);
	int getM();

	void setCM(int centi);
	int getCM();

	//Method Overloading
	void add(int a);
	void add(int a, int b);

	//Binary Operator Overloading
	Distance operator +(Distance d2);
	Distance operator ++();

	void print();
};

