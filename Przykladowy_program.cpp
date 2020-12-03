#include <iostream>

using namespace std;

class Samochod {
  public:
    string marka;   
    string model;
    int rocznik;
};

int main() {
 
  Samochod sam1;
  sam1.marka = "BMW";
  sam1.model = "X5";
  sam1.rocznik = 1999;

  Samochod sam2;
  sam2.marka = "Ford";
  sam2.model = "Mustang";
  sam2.rocznik = 1970;

  cout << sam1.marka << " " << sam1.model << " " << sam1.rocznik << "\n";
  cout << sam2.marka << " " << sam2.model << " " << sam2.rocznik << "\n";
  return 0;
}
