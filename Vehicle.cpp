<<<<<<< HEAD
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
=======
#include<iostream>
using namespace std;
int main()
{
cout << "hello dat cuteeeeeeeeeeeee";
>>>>>>> 21a1a0f503565c0841d0915be9c09183b4b79a66
}