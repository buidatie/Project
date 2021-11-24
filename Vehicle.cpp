#include <Truck.h>
Truck::Truck()
{
}

Truck::Truck(int column, int row): SubVehicle(column, row)
{
}

Truck::Truck(const Truck &t): SubVehicle(t)
{
}

Truck::~Truck()
{
}

Truck & Truck::operator=(const Truck &t)
{
	SubVehicle::operator=(t);
	return *this;
}
