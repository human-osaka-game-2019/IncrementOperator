#ifndef COORDINATE_X_H_
#define COORDINATE_X_H_

class CoordinateX {
public:
	explicit CoordinateX(int in_value):value(in_value) {}
	int GetValue() { return value; }

private:
	int value;
};

#endif
