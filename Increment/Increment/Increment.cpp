#include "Increment.h"

//��u�C���N�������g
CoordinateX CoordinateX::operator++(int)
{
	CoordinateX befor = *this;
	++* this;
	return befor;
}

//�O�u�C���N�������g
CoordinateX& CoordinateX::operator++()
{
	++value;
	return *this;
}