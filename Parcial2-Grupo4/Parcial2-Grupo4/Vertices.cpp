#include "Vertices.h"

Vertices::Vertices(string vertice1, string vertice2, string peso): vertice1(vertice1), vertice2(vertice2), peso(peso){
}

Vertices::Vertices(const Vertices& ver){
	this->vertice1 = ver.vertice1;
	this->vertice2 = ver.vertice2;
	this->peso = ver.peso;
}

void Vertices::setVertice1(string vertice1){
	this->vertice1 = vertice1;
}

void Vertices::setVertice2(string vertice2){
	this->vertice2 = vertice2;
}

void Vertices::setPeso(string peso){
	this->peso = peso;
}

string Vertices::getVertice1(){
	return vertice1;
}

string Vertices::getVertice2(){
	return vertice2;
}

string Vertices::getPeso(){
	return peso;
}

Vertices& Vertices::operator=(const Vertices& ver){
	if (this != &ver) {
		this->vertice1 = ver.vertice1;
		this->vertice2 = ver.vertice2;
		this->peso = ver.peso;
	}
	return *this;
}

ostream& operator<<(ostream out, Vertices& ver) {
	return out
		<< "Vertice 1: " << ver.getVertice1() << endl
		<< "Vertice 2: " << ver.getVertice2() << endl
		<< "Peso: " << ver.getPeso()  << endl;
}

string Vertices::toString(){
	stringstream s;
	s << "Vertice 1: " << getVertice1() << endl;
	s << "Vertice 2: " << getVertice2() << endl;
	s << "Peso: " << getPeso() << endl;
	s << endl;
	return s.str();
}

Vertices::~Vertices(){
}


