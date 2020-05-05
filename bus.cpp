#include "bus.h"
#include <string>
#include <iostream>
bus::bus(int speed, int number_of_packages): transport( speed,number_of_packages){};
bus::bus():transport(){};
bus::bus(bus const& bus):transport(bus){};
bus& bus::operator = (bus const& bus)
{
    this->speed=bus.speed;
    this->number_of_packages=bus.number_of_packages;
    return *this;
}
void bus:: print() const
{
    cout<<"\n������� "<<endl;
    cout<<"speed:  "<<speed<<endl;
    cout<<"number_of_packages:  "<<number_of_packages<<endl;
}
