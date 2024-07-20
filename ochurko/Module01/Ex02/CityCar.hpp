#include "Car.hpp"

class CityCar : public Car
{
    protected:
        int passangers;
    public:
        CityCar();
        CityCar (string make_, string model_, int year_, int passangers_);
        ~CityCar();
        CityCar(const CityCar & copy);
        CityCar & operator = (const CityCar &other);
        void SetPassengers(int tmp);
        virtual void drive() override;
        virtual void accel(int power) override;
};