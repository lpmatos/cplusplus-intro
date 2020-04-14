#include <string>
#include <cstdlib>
#include <iostream>

using namespace std;

#include "Carro.h"

int main(int argc, char const *argv[]){

	cout << endl << "Carro POO - 14-04-2020!" << endl;
	
	Carro car_one;
	//car_one.setMarca("Fiat");
	car_one.setAno(2019);
	car_one.setCor("White");
	car_one.setDono("Lucca");
	
	cout << endl << "Car One - Marca - " << car_one.getMarca() << endl;
	cout << "Car One - Ano - " << car_one.getAno() << endl;
	cout << "Car One - Cor - " << car_one.getCor() << endl;
	cout << "Car One - Pneus - " << car_one.pneus << endl;
	cout << "Car One - Dono - " << car_one.getDono() << endl;
	
	Carro car_two("Fiat", 2020);
	car_two.setCor("Red");
	car_two.setDono("Lucca");
	
	cout << endl << "Car Two - Marca - " << car_two.getMarca() << endl;
	cout << "Car Two - Ano - " << car_two.getAno() << endl;
	cout << "Car Two - Cor - " << car_two.getCor() << endl;
	cout << "Car Two - Pneus - " << car_two.pneus << endl;
	cout << "Car Two - Dono - " << car_two.getDono() << endl << endl;

	car_one.pneus = 2;

	cout << "Car One - Pneus - " << car_one.pneus << endl;
	cout << "Car Two - Pneus - " << car_two.pneus << endl << endl;

  return 0;
}

