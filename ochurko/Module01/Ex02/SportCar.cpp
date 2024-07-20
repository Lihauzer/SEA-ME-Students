#include "SportCar.hpp"

SportCar::SportCar() : Car()
{
    this->top_speed = 0;
    cout << "Default constructor SportCar" << endl;
}

SportCar::SportCar (string make_, string model_, int year_, int top_speed_) : Car(make_, model_, year_)
{
    this->top_speed = top_speed_;
    cout << "Constructor whith parameters SportCar" << endl;
}

SportCar::~SportCar()
{
    cout << "Destructor SportCar" << endl;
}

SportCar::SportCar(const SportCar & copy) : Car(copy)
{
    cout << "Copy constructor SportCar" << endl;
    this->top_speed = copy.top_speed;
}

SportCar & SportCar::operator = (const SportCar &other)
{
    if (&other != this)
    {
        Car::operator=(other);
        this->top_speed = other.top_speed;
        cout << "Assignment operator SportCar" << endl;
    }
    return *this;
}

void SportCar::SetTopspeed(int tmp)
{
    this->top_speed = tmp;
}

void SportCar::drive()
{
    Car::drive();
    cout << " + drive SportCar" << endl;
}

void SportCar::accel(int power)
{
    cout << "Acceleration SportCar: " << this->top_speed/power << " sec.;" << endl;
}
