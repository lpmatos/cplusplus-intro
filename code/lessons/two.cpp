#include <string>
#include <cstdlib>
#include <iostream>

using namespace std;

// Encapsulamento = proteger atributos.

class Car{
	private:
		string marca;
		int ano;
		string cor;
		string dono;
		
	public:
		void set_marca(string x){
			marca = x;
		}
		
		string get_marca(void){
			return marca;
		}
		
		void set_ano(int x){
			if(x > 1990)
				ano = x;
			else
				ano = 1990;
		}
		
		int get_ano(void){
			return ano;
		}
		
		void set_cor(string x){
			cor = x;
		}
		
		string get_cor(void){
			return cor;
		}
		
		void set_dono(string x){
			dono = x;
		}
		
		string get_dono(void){
			return dono;
		}
};

int main(int argc, char const *argv[]){
	
	Car car_one;
	car_one.set_marca("Fiat");
	car_one.set_ano(2019);
	car_one.set_cor("White");
	car_one.set_dono("Lucca");
	
	cout << endl << "Car One - Marca - " << car_one.get_marca() << endl;
	cout << "Car One - Ano - " << car_one.get_ano() << endl;
	cout << "Car One - Cor - " << car_one.get_cor() << endl;
	cout << "Car One - Dono - " << car_one.get_dono() << endl;
	
	Car car_two;
	car_two.set_marca("Ferrari");
	car_two.set_ano(1800);
	car_two.set_cor("Red");
	car_two.set_dono("Lucca");
	
	cout << endl << "Car Two - Marca - " << car_two.get_marca() << endl;
	cout << "Car Two - Ano - " << car_two.get_ano() << endl;
	cout << "Car Two - Cor - " << car_two.get_cor() << endl;
	cout << "Car Two - Dono - " << car_two.get_dono() << endl;
  
  return 0;
}

