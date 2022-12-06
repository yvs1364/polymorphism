#include <iostream>
#include <vector>
#include "../header/Garage.hpp"
#include "../header/Vehicle.hpp"
#include "../header/Car.hpp"
#include "../header/Moto.hpp"
#include "../header/Truck.hpp"

#include "Garage.cpp"
#include "Vehicle.cpp"
#include "Car.cpp"
#include "Moto.cpp"
#include "Truck.cpp"
using namespace std;

// void showWheel(Vehicle *v){
//   v->showWheelInfo();
// }

int main(int argc, const char** argv) {

  vector<Vehicle*> vehicleList;
  vehicleList.push_back(new Vehicle(15000));
  vehicleList.push_back(new Moto(7945, 2012,317));
  vehicleList.push_back(new Car(8000, 2005,5));
  vehicleList.push_back(new Truck(40000, 2001,5000));
  Garage garage(vehicleList);
  garage.garageMenu();

  // for (int i=0;i<vehicleList.size();++i){
  //   garage.showVehicle(vehicleList[i]);
  // }
  // cout << endl;
  // for(int j=0;j<vehicleList.size();++j){
  //   delete vehicleList[j];
  //   vehicleList[j]=0;
  // }

  // delete garage;
  return 0;
}