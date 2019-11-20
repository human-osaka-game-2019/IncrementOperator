#ifndef INCREMENT_H_
#define INCREMENT_H_

class CoordinateX
{
public:

	CoordinateX(int x) :value(x) {}
	int Value() { return value; }

	CoordinateX operator++(int);
	CoordinateX& operator++();

private:

	int value;
};

#endif // !1