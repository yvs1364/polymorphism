#include "../header/Garage.hpp"
using namespace std;

Garage::Garage():m_option(0), m_allVehicle(0){}
Garage::Garage(vector<Vehicle*> list) : m_option(0), m_allVehicle(list) {}
Garage::~Garage(){
    cout << "Release Garage!" << endl;
}
void Garage::garageMenu(){
  cout << "---------------------------------------------" << endl;
  cout << "Welcome to Philibert garage!" << endl;
  cout << "What do you want to do :" << endl;
  cout << "1 for list all vehicle present" << endl;
  cout << "2 for add vehicle" << endl;
  cout << "3 for delete vehicle" << endl;
  cin >> m_option;
  cout << "---------------------------------------------" << endl << endl;
  if(m_option==1){
    showVehicle(m_allVehicle);
  }else if(m_option==2){
    // createVehicle();
  }else if (m_option==3){
    deleteVehicle(m_allVehicle);
  }else{
    cout << "Good Bye!" << endl;
  }
}

void Garage::showVehicle(std::vector<Vehicle *> vehicleList) const{
  for (int i=0;i<vehicleList.size();++i){
    cout << "---------------------------------------------" << endl;
    cout << "Vehicle : " << i <<endl;
    vehicleList[i]->showInfo();
    cout << "---------------------------------------------" << endl;
  }
}
void Garage::deleteVehicle(std::vector<Vehicle *> vehicleList){
  cout << "which vehicle you want to delete?" << endl;
  int vehicleToDelete=0;
  cin >> vehicleToDelete;
  delete vehicleList[vehicleToDelete];
  vehicleList[vehicleToDelete] = 0;
  cout << "Vehicle has been deleted" <<endl;
  garageMenu();
}

// void Garage::showWheel(Vehicle *v) const{
//   v->showWheelInfo();
// }

bool Garage::createVehicle(){
  cout << "Create a vehicle!" << endl;
}
bool Garage::deleteVehicle(){
  cout << "Delete a vehicle!" << endl;
}

