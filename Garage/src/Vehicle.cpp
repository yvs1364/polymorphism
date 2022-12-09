#include "../header/Vehicle.hpp"

using namespace std;

Vehicle::Vehicle() : m_price(0), m_nbrWheel(0), m_manufactureYear(0){}
Vehicle::Vehicle(int price) : m_price(price), m_nbrWheel(0), m_manufactureYear(0) {}
Vehicle::Vehicle(int price, int wheel):m_price(price), m_nbrWheel(wheel), m_manufactureYear(0) {}
Vehicle::Vehicle(int price, int wheel, int year) : m_price(price), m_nbrWheel(wheel), m_manufactureYear(year) {}

Vehicle::~Vehicle(){
  cout << "Release Vehicle!" <<endl;
}

void Vehicle::showInfo() const{
  if(m_price==0){
    cout << "It's a Vehicle !" << endl;
  }else{
    cout << "It's a Vehicle which cost : " << m_price << " Euros"<<endl;
  }
}
void Vehicle::showWheelInfo() const{
  cout << "Vehicle not defined and therefore it has " << m_nbrWheel << " wheel." << endl;
  cout << "---------------------------------------------" << endl;
}