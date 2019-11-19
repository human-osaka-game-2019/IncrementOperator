#ifndef HEADER_H_
#define HEADER_H_

class CoordinateX
{
public:

	CoordinateX(int x) :value(x) {}

	int Value() { return value; }

	CoordinateX& operator++() 
	{ 

		return *this;
	}

	CoordinateX& operator++(int) 
	{ 
		return *this;
	}

private:

	int value;

};

#endif // !HEADER_H_
