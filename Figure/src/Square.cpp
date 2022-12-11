#include "../header/Square.hpp"
using namespace std;


Square::Square(): m_length(0) {}

Square::Square(int length) : m_length(length) {}

Square::~Square(){
  cout << "Release Square!" << endl;
}

void Square::show() const{
  cout << "it's a Square of " << m_length <<" lenght" << endl;
}

void Square::perimeter() const{
  int perimeterSum = 4* m_length;
  cout << "this perimeter is : " << perimeterSum << endl;
}
void Square::area() const{
  int areaSum = m_length*m_length;
  cout << "This area is : " << areaSum << endl;
  cout << "<--************************-->" << endl;
}