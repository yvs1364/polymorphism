#ifndef DEF_CAR
#define DEF_CAR

#include <iostream>
#include "Vehicle.hpp"

class Car : public Vehicle{
  public:
    Car();
    Car(int price, int year, int door);
    virtual ~Car();
    virtual void showInfo() const;
    virtual void showWheelInfo() const;

  protected:
    int m_door;
};

#endif // DEF CAR