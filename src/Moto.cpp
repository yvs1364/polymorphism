#include "../header/Moto.hpp"

using namespace std;

Moto::Moto(): Vehicle(0,2), m_speed(0) {}
Moto::Moto(int price, int year,int speed): Vehicle(price,2,year), m_speed(speed){}
Moto::~Moto(){
  cout << "Release Moto!" << endl;
}

void Moto::showInfo() const{
  if(m_price == 0){
    cout << "It's a Moto !" << endl;
  }else{
    cout << "It's a Moto which cost : " << m_price << " Euros." << endl;
    cout << "who goes at " << m_speed << " km/h." << endl;
    cout << "Was built in " << m_manufactureYear << endl;

  }
}

void Moto::showWheelInfo()const{
  cout << "Moto had " << m_nbrWheel << " wheel." << endl;
  cout << "---------------------------------------------" << endl;
}