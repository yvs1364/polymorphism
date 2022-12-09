#include "../header/Car.hpp"

using namespace std;

Car::Car():Vehicle(0,4), m_door(0){}
Car::Car(int price, int year, int door) : Vehicle(price, 4, year), m_door(door) {}

Car::~Car(){
  cout << "Release Car!" << endl;
}

void Car::showInfo() const{
  if (m_price == 0){
    cout << "It's a Car !" << endl;
  }else{
    cout << "It's a Car which cost : " << m_price << " Euros." <<endl;
    cout << "Who has " << m_door << " doors." << endl;
    cout << "Was built in " << m_manufactureYear << endl;
  }
}

void Car::showWheelInfo() const{
  cout << "Car had " << m_nbrWheel << " wheel." << endl;
  cout << "---------------------------------------------" << endl;
}