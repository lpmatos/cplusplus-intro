#include "Carro.h"
#include <string>
#include <iostream>

using namespace std;

void Carro::setMarca(string marca){
	this->marca = marca;
}

string Carro::getMarca(){
	return marca;
}

void Carro::setAno(int ano){
	this->ano = ano;
}

int Carro::getAno(){
	return ano;
}

void Carro::setCor(string cor){
	this->cor = cor;
}

string Carro::getCor(){
	return cor;
}

void Carro::setDono(string dono){
	this->dono = dono;
}

string Carro::getDono(){
	return dono;
}

Carro::Carro(){
	this->marca = "Default";
}

Carro::Carro(string marca, int ano){
	this->marca = marca;
	this->ano = ano;
}

Carro::~Carro(){
	cout << "Carro foi destruido!" << endl;
}

int Carro::pneus = 4;
