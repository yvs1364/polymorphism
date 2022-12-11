#include "../header/Circle.hpp"
using namespace std;

Circle::Circle() : m_radius(0.0){}
Circle::Circle(float radius) : m_radius(radius){}

Circle::~Circle(){
  cout << "Release Circle!" << endl;
}

void Circle::show() const{
  cout << "it's a Circle with " <<m_radius<< " Radius" << endl;
}

void Circle::perimeter() const{
  float perimeterSum = 2 * PI * m_radius;
  cout << "This perimeter is : " << perimeterSum << endl;
}

void Circle::area() const{
  float areaSum = PI * m_radius * m_radius;
  cout << "This area is : " << areaSum << endl;
  cout << "<--************************-->" << endl;
}
