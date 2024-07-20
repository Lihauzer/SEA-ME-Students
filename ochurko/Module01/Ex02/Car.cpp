#include "Car.hpp"

Car::Car()
{
    cout << "Default constructor CAR" << endl;
    this->make = "default";
    this->model = "default";
    this->year = 0;
}

Car::Car(string make_, string model_, int year_)
{
    cout << "Constructor whith parameters CAR" << endl;
    this->make = make_;
    this->model = model_;
    this->year = year_;
}

Car::~Car()
{
    cout << "Destructor CAR" << endl;
}

Car::Car(const Car &copy)
{
    this->make = copy.make;
    this->model = copy.model;
    this->year = copy.year;
    cout << "Copy constructor CAR" << endl;
}

Car &Car::operator = (const Car &copy)
{
    
    if(&copy != this)
    {
        this->make = copy.make;
        this->model = copy.model;
        this->year = copy.year;
        cout << "Assignment operator CAR" << endl;
    }
    return *this;
}

void Car::SetMake(string str)
{
    this->make = str;
}

void Car::SetModel(string str)
{
    this->model = str;
}

void Car::SetYear(int tmp)
{
    this->year = tmp;
}

void Car::drive()
{
    cout << "Driving make: " << this->make << " model: " << this->model << " year: " << this->year << endl;
}