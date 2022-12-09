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
    void showVehicle(std::vector<Vehicle *> pVehicleList);
    void deleteVehicle(std::vector<Vehicle *> pVehicleList);
    void createVehicle();
    // void showWheel(Vehicle v) const;

  protected:
    int m_option;
    std::vector<Vehicle*> m_allVehicle;
};

#endif