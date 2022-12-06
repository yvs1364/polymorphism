#ifndef DEF_GARAGE
#define DEF_GARAGE
#include "Vehicle.hpp"
#include <iostream>
#include <vector>

class Garage{
  public:
    Garage();
    Garage(std::vector<Vehicle*> list);
    virtual ~Garage();
    void garageMenu();
    virtual void showVehicle(std::vector<Vehicle *> vehicleList) const;
    void deleteVehicle(std::vector<Vehicle *> vehicleList);
    // void showWheel(Vehicle v) const;
    bool createVehicle();
    bool deleteVehicle();

  protected:
    int m_option;
    std::vector<Vehicle*> m_allVehicle;
};

#endif