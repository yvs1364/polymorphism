#include "../header/Figure.hpp"
using namespace std;


Figure::Figure(/* args */){
}

Figure::~Figure(){
  cout << "Release Figure!" << endl;
}

void Figure::show() const{
  cout << "it's a Figure" << endl;
}