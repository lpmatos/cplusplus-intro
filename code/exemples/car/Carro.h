#ifndef CARRO_H
#define CARRO_H

#include <string>

using namespace std;

class Carro {
	private:
		string marca;
		int ano;
		string cor;
		string dono;
	public:
		// Construtor.
		Carro();
		Carro(string marca, int ano);
		// Destrutor.
		~Carro();
		// Um atributo static eh um atributo da classe, ou seja, aquela classe tem aquele valor.
		// Qualquer objeto a ser criado tera compartilhado esse mesmo valor.
		static int pneus;
		void setMarca(string marca);
		string getMarca();
		void setAno(int ano);
		int getAno();
		void setCor(string cor);
		string getCor();
		void setDono(string dono);
		string getDono();
};

#endif
