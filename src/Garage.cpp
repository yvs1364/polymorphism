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

void Garage::showVehicle(vector<Vehicle *> pVehicleList) const{
  cout << "Vehicle list size : " << pVehicleList.size() << endl;
  for (int i=0;i<pVehicleList.size();++i){
    cout << "---------------------------------------------" << endl;
    cout << "Vehicle : " << i <<endl;
    pVehicleList[i]->showInfo();
    cout << "---------------------------------------------" << endl;
  }
}
void Garage::deleteVehicle(vector<Vehicle *> pVehicleList){
  int vehicleToDelete=0;
  cout << "which vehicle you want to delete?" << endl;
  cin >> vehicleToDelete;
   for (int i=0;i<pVehicleList.size();++i){
    if(i==vehicleToDelete){
      delete pVehicleList[i];
      pVehicleList[i] = 0;
      m_allVehicle.erase(m_allVehicle.begin()+i);
      cout << "Vehicle "<< i <<" has been deleted" <<endl;
    }
   }
   // pVehicleList.erase(remove(pVehicleList.begin(),pVehicleList.end(),pVehicleList[vehicleToDelete]));

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

