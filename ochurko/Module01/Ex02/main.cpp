#include "CityCar.hpp"
#include "SportCar.hpp"
#include "Drive.hpp"

int main()
{
   

    SportCar highway;
    highway.SetTopspeed(400);
    CityCar gh("KIA", "Sorento", 2023, 5);

    Drive vas;

    vas.accel(&gh, 100);
    vas.accel(&highway, 100);

    vas.drive(&highway);
    vas.drive(&gh);

    return 0;
}
