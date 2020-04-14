#include <string>
#include <cstdlib>
#include <iostream>

using namespace std;

class Car{
	public:
		string marca;
		int ano;
		string cor;
	private:
		string dono;
};

int main(int argc, char const *argv[]){
	
	Car car_one;
	car_one.marca = "Fiat";
	car_one.ano = 2019;
	car_one.cor = "White";
	
	cout << endl << "Car One - Marca - " << car_one.marca << endl;
	cout << "Car One - Ano - " << car_one.ano << endl;
	cout << "Car One - Cor - " << car_one.cor << endl;
	
	Car car_two;
	car_two.marca = "Ferrari";
	car_two.ano = 2015;
	car_two.cor = "Red";
	
	cout << endl << "Car Two - Marca - " << car_two.marca << endl;
	cout << "Car Two - Ano - " << car_two.ano << endl;
	cout << "Car Two - Cor - " << car_two.cor << endl;
  
  return 0;
}

