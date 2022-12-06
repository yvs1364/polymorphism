#ifndef DEF_MOTO
#define DEF_MOTO

#include <iostream>
#include "Vehicle.hpp"

class Moto : public Vehicle{
  public:
    Moto();
    Moto(int price, int year, int speed);
    virtual ~Moto();
    virtual void showInfo() const;
    virtual void showWheelInfo() const;

  protected : 
    int m_speed;
};

#endif // DEF MOTO