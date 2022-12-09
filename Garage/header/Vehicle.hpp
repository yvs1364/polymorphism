#ifndef DEF_VEHICLE
#define DEF_VEHICLE
#include <iostream>
#include "Garage.hpp"

class Vehicle{
  public:
    Vehicle();
    Vehicle(int price);
    Vehicle(int price, int wheel);
    Vehicle(int price, int wheel, int year);
    virtual ~Vehicle();
    virtual void showInfo() const;
    virtual void showWheelInfo() const;

  protected:
    int m_price;
    int m_nbrWheel;
    int m_manufactureYear;
};

#endif // DEF VEHICLE