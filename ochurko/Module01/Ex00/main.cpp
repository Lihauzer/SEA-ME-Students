#include "Car.hpp"

int main()
{
    Car city;
    city.getName("Kia");
    city.getSpeed(210);

    Car highway;
    highway.getName("BMW");
    highway.getSpeed(320);

    Car work(city);

    work = highway;

    return 0;
}
