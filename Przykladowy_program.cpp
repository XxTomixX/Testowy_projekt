#include <iostream>

using namespace std;

class Motocykl{
public:
	string nazwa;
	int rocznik;
};


class Samochod {
  public:
    string marka;   
    string model;
    int rocznik;


	void nowa_metaoda()
	{
		//kod
  }
  
	void testowa_metoda_programu()
	{
		//inny kod
	}

};

int main() {
 
  Samochod sam1;
  sam1.marka = "BMW";
  sam1.model = "X6";
  sam1.rocznik = 1999;

  Samochod sam2;
  sam2.marka = "Ford";
  sam2.model = "Mustang";
  sam2.rocznik = 1971;
	
  Motocykl mot1;
  mot1.nazwa="komar";
  mot1.rocznik="1988";

  cout << sam1.marka << " " << sam1.model << " " << sam1.rocznik << "\n";
  cout << sam2.marka << " " << sam2.model << " " << sam2.rocznik << "\n";
  cout << mot1.nazwa << " " << mot1.rocznik << "\n";
  return 0;
}
