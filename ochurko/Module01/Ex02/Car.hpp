#ifndef CAR_HPP
#define CAR_HPP

#include <iostream>

using namespace std;

class Car
{
    private:
        string  make;
        string  model;
        int     year;
    public:
        Car();
        Car(string make_, string model_, int year_);
        ~Car();
        Car(const Car &copy);
        Car & operator = (const Car &copy);
        void SetMake(string str);
        void SetModel(string str);
        void SetYear(int tmp);
        virtual void drive();
        virtual void accel(int power) = 0;
};
#endif
