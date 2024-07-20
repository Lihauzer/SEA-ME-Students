#include "CityCar.hpp"

int main()
{
    Car city;
   

    CityCar highway;

    CityCar gh("KIA", "Sorento", 2023, 320);

    CityCar qw(gh);

    gh = highway;

    qw.drive();

    return 0;
}
