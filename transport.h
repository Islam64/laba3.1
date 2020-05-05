#ifndef TRANSPORT_H_INCLUDED
#define TRANSPORT_H_INCLUDED

#include <string>
using namespace std;
class transport
{
protected: int speed, number_of_packages;
public:
transport();
transport(int speed, int number_of_packages);
virtual void print()const=0;
transport(transport const &transport);
int getspeed() const;
int getnumber_of_packages() const;
void setspeed(int speed) ;
void setnumber_of_packages(int number_of_packages) ;
};


#endif // TRANSPORT_H_INCLUDED
