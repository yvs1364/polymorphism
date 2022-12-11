#ifndef DEF_CIRCLE
#define DEF_CIRCLE

#include "Figure.hpp"
#include <iostream>

#define PI 3.141

class Circle : public Figure{
  private:
    float m_radius;
  public:
    Circle();
    Circle(float radius);
    ~Circle();
    void show() const;
    virtual void perimeter() const;
    virtual void area() const;
};

#endif // DEF_CIRCLE
