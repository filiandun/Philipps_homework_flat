#include "flat.h"

Flat::Flat() {}

Flat::Flat(double area, double price)
{
	this->area = area;
	this->price = price;
}

Flat::~Flat() {}



bool Flat::operator==(const Flat& f)
{
	return this->area == f.area;
}


void Flat::operator=(const Flat& f)
{
	this->area = f.area;
	this->price = f.price;
}


bool Flat::operator>(const Flat& f)
{
	return this->price > f.price;
}


std::ostream& operator<<(std::ostream& output, const Flat& f)
{
	output << "Площадь: " << f.area << " " << "Цена: " << f.price << std::endl;

	return output;
}
