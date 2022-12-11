#ifndef DEF_TRIANGLE
#define DEF_TRIANGLE

#include "Figure.hpp"
#include <iostream>

class Triangle : public Figure{
  protected:
    int m_base;
    int m_height;
  public:
    Triangle();
    Triangle(int base, int height);
    ~Triangle();
    void show() const;
    virtual void perimeter() const;
    virtual void area() const;
};

#endif //DEF_TRIANGLE
