#ifndef CAR_HPP
#define CAR_HPP

#include <iostream>

using namespace std;

class Car
{
    private:
        string  name;
        int     speed;
    public:
        Car();
        ~Car();
        Car(const Car &copy);
        Car & operator = (const Car &copy);
        void SetName(string str);
        void SetSpeed(int tmp);
};
#endif
