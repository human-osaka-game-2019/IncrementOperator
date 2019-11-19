#include "CoordinateX.h"

CoordinateX::CoordinateX(int x)
	: value(x) {

}

CoordinateX& CoordinateX::operator++() {
	++value;
	return *this;
}

CoordinateX CoordinateX::operator++(int) {
	CoordinateX tmp = *this;
	++(*this);
	return tmp;
}
