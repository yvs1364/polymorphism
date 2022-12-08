#ifndef DEF_GARAGE
#define DEF_GARAGE
#include "Vehicle.hpp"
#include <iostream>
#include <vector>

class Garage{
  public:
    Garage();
    Garage(std::vector<Vehicle*> list);
    ~Garage();
    void garageMenu();
    void showVehicle(std::vector<Vehicle *> pVehicleList, int option);
    void deleteVehicle(std::vector<Vehicle *> pVehicleList);
    void createVehicle();
    void createCar();
    void createMoto();
    void createTruck();
    void showWheel(Vehicle *v) const;

  protected:
    int m_option;
    std::vector<Vehicle*> m_allVehicle;
};

#endif