#ifndef DEF_FIGURE
#define DEF_FIGURE
#include <iostream>

class Figure{
  protected:
  public:
    Figure();
    ~Figure();
  virtual void show() const;
  virtual void perimeter() const = 0;
  virtual void area() const = 0;
};

#endif //DEF_FIGURE
