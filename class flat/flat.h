#pragma once
#include <iostream>

class Flat
{
public:
	Flat();
	Flat(double area, double price);
	~Flat();

private:
	double area = 0;
	double price = 0;

public:
	bool operator==(const Flat& f);
	void operator=(const Flat& f);
	bool operator>(const Flat& f);

	friend std::ostream& operator<<(std::ostream& output, const Flat& f);
};

