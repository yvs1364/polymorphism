#include <iostream>
#include <vector>

#include "../header/Figure.hpp"
#include "../header/Triangle.hpp"
#include "../header/Square.hpp"
#include "../header/Rectangle.hpp"
#include "../header/Circle.hpp"

#include "Figure.cpp"
#include "Triangle.cpp"
#include "Circle.cpp"
#include "Square.cpp"
#include "Rectangle.cpp"
using namespace std;

int main(int argc, const char** argv) {
  vector<Figure*> figureList;
  figureList.push_back(new Triangle(2,5));
  figureList.push_back(new Rectangle(10,12));
  figureList.push_back(new Square(17));
  figureList.push_back(new Circle(17.17));
  for (int i = 0; i < figureList.size(); i++){
    figureList[i]->show();
    figureList[i]->perimeter();
    figureList[i]->area();
  }

  return 0;
}