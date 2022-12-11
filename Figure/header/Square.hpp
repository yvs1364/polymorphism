#ifndef DEF_SQUARE
#define DEF_SQUARE

#include "Figure.hpp"
#include <iostream>

class Square : public Figure{
protected:
  int m_length;
public:
  Square();
  Square(int length);
  ~Square();
  void show() const;
  virtual void perimeter() const;
  virtual void area() const;
};

#endif // DEF_SQUARE
