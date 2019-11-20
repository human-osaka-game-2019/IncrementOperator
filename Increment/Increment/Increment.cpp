#include "Increment.h"

//後置インクリメント
CoordinateX CoordinateX::operator++(int)
{
	CoordinateX befor = *this;
	++* this;
	return befor;
}

//前置インクリメント
CoordinateX& CoordinateX::operator++()
{
	++value;
	return *this;
}