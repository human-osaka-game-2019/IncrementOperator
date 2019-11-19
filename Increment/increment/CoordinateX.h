#ifndef COORDINATEX_H
#define COORDINATEX_H

class CoordinateX
{
private:

	int value;

public:

	CoordinateX(int x) : value(x) {}
	int Value() { return value; }

	CoordinateX& operator ++()
	{
		return *this;
	}

	CoordinateX operator++(int)
	{
		return *this;
	}

};

#endif