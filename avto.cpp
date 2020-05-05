#include "avto.h"
#include <string>
using namespace std;

avto::avto():transport()
{
  this->model="b5";
};
avto::avto(string model,int speed, int number_of_packages):transport(speed,number_of_packages)
{
  this->model=model;
};
 avto::avto(avto const &avto)
{
  this->speed=avto.speed;
  this->number_of_packages=avto.number_of_packages;
  this->model=avto.model;
}
string avto::getmodel() const
{
  return model;
}
void avto::setmodel(string  model)
{
  this->model=model;
}
