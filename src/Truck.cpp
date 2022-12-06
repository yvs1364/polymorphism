#include "../header/Truck.hpp"

using namespace std;

Truck::Truck():Vehicle(0,4), m_weightCanCarry(0) {}
Truck::Truck(int price, int year, int weight):Vehicle(price,4,year), m_weightCanCarry(weight) {}
Truck::~Truck(){
  cout << "Release Truck!" << endl;
}

void Truck::showInfo() const{
  if (m_price == 0){
    cout << "It's a Truck !" << endl;
  }else{
    cout << "It's a Truck which cost : " << m_price << " Euros."<< endl;
    cout << "Can carry " << m_weightCanCarry << " kg." << endl;
    cout << "Was built in " << m_manufactureYear << endl;
  }
}
void Truck::showWheelInfo() const{
  cout << "Truck had " << m_nbrWheel << " wheel." << endl;
  cout << "---------------------------------------------" << endl;
}