#include "Vehicle.h"
Vehicle::Vehicle()
{
	mX = mY = 0;
}

Vehicle::Vehicle(int column, int row)
{
	mX = column;
	mY = row;
}

Vehicle & Vehicle::operator=(const Vehicle &v)
{
	if (this != &v) 
    {
		mX = v.mX;
	    mY = v.mY;
	}
	return *this;
}

Vehicle::Vehicle(const Vehicle &v)
{
	mX = v.mX;
	mY = v.mY;
}

Vehicle::~Vehicle()
{
}