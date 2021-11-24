#include "Vehicle.h"
class Truck: public Vehicle
{
private:
    static const int width = 4;
    static const int height = 1;
public:
	Truck();
	Truck(int, int);
	Truck(const Truck &);
	~Truck();
};
