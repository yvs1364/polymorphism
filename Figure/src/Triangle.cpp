#include "../header/Triangle.hpp"
using namespace std;


Triangle::Triangle() : m_base(0), m_height(0){}
Triangle::Triangle(int base, int height) : m_base(base), m_height(height) {}

Triangle::~Triangle(){
  cout << "Release Triangle!" << endl;
}

void Triangle::show() const{
  cout << "it's a Triangle of "<<m_base << " base and "<< m_height << " height" << endl;
}

void Triangle::perimeter() const{
  int perimeterSum = 2*m_base+m_height;
  cout << "This perimeter is : " << perimeterSum << endl;
}
void Triangle::area() const{
  float areaSum = (0.5)*m_height*m_base;
  cout << "This area is : " << areaSum << endl;
  cout << "<--************************-->" << endl;
}