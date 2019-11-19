#include "CoordinateX.h"

CoordinateX::CoordinateX(int x)
	: value(x) {

}

CoordinateX& CoordinateX::operator++() {
	return *this;
}

CoordinateX CoordinateX::operator++(int) {
	return *this;
}
