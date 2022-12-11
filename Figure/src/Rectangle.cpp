#include "../header/Rectangle.hpp"
using namespace std;

Rectangle::Rectangle() : m_length(0), m_breadth(0) {}
Rectangle::Rectangle(int length, int breadth) : m_length(length), m_breadth(breadth) {}

Rectangle::~Rectangle(){
  cout << "Release Rectangle!" << endl;
}

void Rectangle::show() const{
  cout << "it's a rectangle of " << m_length << " lenght and " << m_breadth <<" breadth" << endl;
}

void Rectangle::perimeter() const{
  int perimeterSum = 2 * (m_length + m_breadth);
  cout << "This perimeter is : " << perimeterSum << endl;
}
void Rectangle::area() const{
  int areaSum = m_length * m_breadth;
  cout << "This area is : " << areaSum << endl;
  cout << "<--************************-->" << endl;
}
