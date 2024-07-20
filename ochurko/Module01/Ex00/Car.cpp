#include "Car.hpp"

Car::Car()
{
    cout << "Default constructor" << endl;
}

Car::~Car()
{
    cout << "Destructor" << endl;
}

Car::Car(const Car &copy)
{
    this->name = copy.name;
    this->speed = copy.speed;
    cout << "Copy constructor" << endl;
}

Car &Car::operator = (const Car &copy)
{
    cout << "Assignment operator" << endl;
    if(&copy != this)
    {
        this->name = copy.name;
        this->speed = copy.speed;
    }
    return *this;
}

void Car::SetName(string str)
{
    this->name = str;
}

void Car::SetSpeed(int tmp)
{
    this->speed = tmp;
}