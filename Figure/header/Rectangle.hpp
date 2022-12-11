#ifndef DEF_RECTANGLE
#define DEF_RECTANGLE

#include "Figure.hpp"
#include <iostream>

class Rectangle : public Figure{
private:
  int m_breadth;
  int m_length;

public:
  Rectangle();
  Rectangle(int length, int breadth);
  ~Rectangle();
  void show() const;
  virtual void perimeter() const;
  virtual void area() const;
};

#endif // DEF_RECTANGLE
