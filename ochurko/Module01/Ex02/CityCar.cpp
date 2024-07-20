#include "CityCar.hpp"

CityCar::CityCar() : Car()
{
    this->passangers = 0;
    cout << "Default constructor CityCar" << endl;
}

CityCar::CityCar (string make_, string model_, int year_, int passangers_) : Car(make_, model_, year_)
{
    this->passangers = passangers_;
    cout << "Constructor whith parameters CityCar" << endl;
}

CityCar::~CityCar()
{
    cout << "Destructor CityCar" << endl;
}

CityCar::CityCar(const CityCar & copy) : Car(copy)
{
    cout << "Copy constructor CityCar" << endl;
    this->passangers = copy.passangers;
}

CityCar & CityCar::operator = (const CityCar &other)
{
    if (&other != this)
    {
        Car::operator=(other);
        this->passangers = other.passangers;
        cout << "Assignment operator CityCar" << endl;
    }
    return *this;
}

void CityCar::SetPassengers(int tmp)
{
    this->passangers = tmp;
}

void CityCar::drive()
{
    Car::drive();
    cout << " + drive CityCar" << endl;
}

void CityCar::accel(int power)
{
    cout << "Acceleration CityCar: " << power/this->passangers << " sec.;" << endl;
}