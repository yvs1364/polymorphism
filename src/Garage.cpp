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
  cout << "1 For list all vehicle present" << endl;
  cout << "2 For add vehicle" << endl;
  cout << "3 For delete vehicle" << endl;
  cout << "4 For leave garage" << endl;
  cin >> m_option;
  if(m_option==1){
    showVehicle(m_allVehicle);
  }else if(m_option==2){
    createVehicle();
  }else if (m_option==3){
    deleteVehicle(m_allVehicle);
  }else if (m_option==4){
    cout << "Good Bye!" << endl;
  }else{
    cout << "Good Bye!" << endl;
  }
}

void Garage::showVehicle(vector<Vehicle *> pVehicleList){
  cout << "Vehicle list size : " << pVehicleList.size() << endl;
  for (int i=0;i<pVehicleList.size();++i){
    cout << "---------------------------------------------" << endl;
    cout << "Vehicle : " << i <<endl;
    pVehicleList[i]->showInfo();
    cout << "---------------------------------------------" << endl;
  }
  // garageMenu();
}

void Garage::createVehicle(){
  int typeOfVehicle=0, price=0, year=0, other=0;
  cout << "---------------------------------------------" << endl;
  cout << "which type of vehicle you want to create?" << endl;
  cout << "1 for car " << endl;
  cout << "2 For moto" << endl;
  cout << "3 For truck" << endl;
  cout << "4 For leave" << endl;
  cin >> typeOfVehicle;

  switch (typeOfVehicle){
  case 1:
    cout << "Which price?" << endl;
    cin >>price;
    cout << "Which year?" << endl;
    cin >> year;
    cout << "How many doors?" << endl;
    cin >> other;
    m_allVehicle.push_back(new Car(price, year, other));
    cout << "Car has been created" << endl;
    break;
  case 2:
    cout << "Which price?" << endl;
    cin >> price;
    cout << "Which year?" << endl;
    cin >> year;
    cout << "Max speed?" << endl;
    cin >> other;
    m_allVehicle.push_back(new Moto(price, year, other));
    cout << "Moto has been created" << endl;
    break;
  case 3:
    cout << "Which price?" << endl;
    cin >> price;
    cout << "Which year?" << endl;
    cin >> year;
    cout << "How many weight can carry?" << endl;
    cin >> other;
    m_allVehicle.push_back(new Truck(price, year, other));
    cout << "Truck has been created" << endl;
    break;
  default:
    break;
  }
  garageMenu();
}

void Garage::deleteVehicle(vector<Vehicle *> pVehicleList){
  showVehicle(pVehicleList);
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
  garageMenu();
}

// void Garage::showWheel(Vehicle *v) const{
//   v->showWheelInfo();
// }
