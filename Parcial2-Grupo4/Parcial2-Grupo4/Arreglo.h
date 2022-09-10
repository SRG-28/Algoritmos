#pragma once
#include <iostream>
#include <sstream>
#include <string>
#include "IteradorArreglo.h"
using namespace std;

template<class T>
class Arreglo {
private:
	T** vec;
	int can;
	int tam;
public:
	Arreglo(int = 0);
	int getCan();
	int getTam();
	void setCan(int);
	void ingresaAlArreglo(T*);
	T* operator[] (int);
	T* obtenerIterador();
	T* obtener(int);
	int maxElemento();
	int numElementos();
	bool vacia();
	string mostrar();
	string toString();
	virtual ~Arreglo();
};


template<class T>
Arreglo<T>::Arreglo(int tamanio) : can(0), tam(tamanio) {
	vec = new T * [tam];
	for (int i = 0; i < tam; i++)
		vec[i] = new T;
}

template<class T>
int Arreglo<T>::getCan() {
	return can;
}

template<class T>
int Arreglo<T>::getTam() {
	return tam;
}

template<class T>
void Arreglo<T>::setCan(int c) {
	can = c;
}

template<class T>
void Arreglo<T>::ingresaAlArreglo(T* ele) {
	if (getCan() <= getTam()) {
		vec[can] = ele;
		setCan(getCan() + 1);
	}
}

template<class T>
T* Arreglo<T>::operator[] (int indice) {
	return vec[indice];
}

template<class T>
T* Arreglo<T>::obtener(int pos) {
	if (pos < can)
		return vec[pos];
	return nullptr;
}

template<class T>
int Arreglo<T>::maxElemento() {
	return 0;
}

template<class T>
int Arreglo<T>::numElementos() {
	return can;
}

template<class T>
bool Arreglo<T>::vacia() {
	return can == 0;
}

template<class T>
T* Arreglo<T>::obtenerIterador() {
	return new IteradorArreglo<T>(can, vec);
}

template <class T>
string Arreglo<T>::mostrar() {
	stringstream s;
	s << "Los existentes son l@s siguientes: " << endl;
	for (int i = 0; i < can; i++) {
		if (vec != nullptr) {
			s << "El numero [" << i << "] es:" << endl;
			s << vec->toString() << endl;
		}
	}
	return s.str();
}

template<class T>
string Arreglo<T>::toString() {
	stringstream s;
	s << "-------------Listado------------------------" << endl;
	for (int i = 0; i < can; i++)
		s << vec[i]->toString();
	s << "--------------------------------------------" << endl;
	return s.str();
}


template<class T>
Arreglo<T>::~Arreglo() {
	for (int i = 0; i < can; i++)
		delete vec[i];
	delete[] vec;
}

