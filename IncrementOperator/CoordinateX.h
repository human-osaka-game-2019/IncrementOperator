#ifndef COORDINATE_X_H_
#define COORDINATE_X_H_

class CoordinateX {
public:
	explicit CoordinateX(int in_value):value(in_value) {}
	int GetValue() { return value; }

	CoordinateX operator++() {
		//return CoordinateX(this->value += 1);
	}

	CoordinateX operator++(int x) {
		//return CoordinateX(this->value += 1);
	}

private:
	int value;
};

#endif
