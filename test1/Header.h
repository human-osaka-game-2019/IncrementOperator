#ifndef H_H_
#define H_H_
#include <iostream>



class CoordinateX
{
public:
	CoordinateX(int x) :x(x) {}

	CoordinateX& operator++ ()
	{
		x++;
		return *this;
	}

	CoordinateX operator++ (int)
	{
		CoordinateX old = *this;
		++*this;
		return old;
	}

private:
	int x;


};

#endif // !H_H_

