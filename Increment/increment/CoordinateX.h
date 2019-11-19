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
		value = value + 1;

		return *this;
	}

	CoordinateX operator++(int)
	{
		CoordinateX old = *this;

		++* this;

		return old;
	}

};

#endif