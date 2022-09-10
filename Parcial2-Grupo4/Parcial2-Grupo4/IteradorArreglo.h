#pragma once
#include <iostream>
#include <string>
#include "Arreglo.h"
using namespace std;

template<class T>
class IteradorArreglo {
private:
	int i;
	int can;
	T* ar;
public:
	IteradorArreglo(T*);
	bool isDone();
	void first();
	void next();
	bool masElementos();
	T* proximoElemento();
	T* currenItem();
	virtual ~IteradorArreglo();
};

template <class T>
IteradorArreglo<T>::IteradorArreglo(T* ptrCont) {
	can = 0;
	i = 0;
	ar = ptrCont;
}

template <class T>
IteradorArreglo<T>::~IteradorArreglo() {
}

template <class T>
bool IteradorArreglo<T>::isDone() {
	return can < ar->getCon();
}

template <class T>
void IteradorArreglo<T>::first() {
	can = 0;
}

template <class T>
void IteradorArreglo<T>::next() {
	can++;
}

template <class T>
bool IteradorArreglo<T>::masElementos() {
	return i < can;
}

template <class T>
T* IteradorArreglo<T>::proximoElemento() {
	T* r = nullptr;
	if (masElementos()) {
		r = ar[i++];
	}
	return r;
}

template <class T>
T* IteradorArreglo<T>::currenItem() {
	return ar->obtenerElemento(can);
}


