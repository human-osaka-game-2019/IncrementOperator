#ifndef HEADER_H_
#define HEADER_H_

class CoordinateX
{
public:

	CoordinateX(int x) :value(x) {}

	int Value() { return value; }

	CoordinateX& operator++() 
	{ 
		++value;
		return *this;
	}

	CoordinateX& operator++(int) 
	{ 
		CoordinateX tmp = *this;
		++(*this);
		return tmp;
	}

private:

	int value;

};

#endif // !HEADER_H_
