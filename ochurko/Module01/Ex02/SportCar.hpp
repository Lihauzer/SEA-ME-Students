#include "Car.hpp"

class SportCar : public Car
{
    private:
        int top_speed;
    public:
        SportCar();
        SportCar (string make_, string model_, int year_, int top_speed_);
        ~SportCar();
        SportCar(const SportCar & copy);
        SportCar & operator = (const SportCar &other);
        void SetTopspeed(int tmp);
        virtual void drive() override;
        virtual void accel(int power) override;
};