#ifndef DEF_TRUCK
#define DEF_TRUCK

#include <iostream>
#include "Vehicle.hpp"

class Truck : public Vehicle{
  public:
    Truck();
    Truck(int price, int weight,int year);
    virtual ~Truck();
    virtual void showInfo() const;
    virtual void showWheelInfo() const;

  protected:
    int m_weightCanCarry;
};

#endif