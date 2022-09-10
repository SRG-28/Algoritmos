#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include "Validacion.h"
using namespace std;

class Vista{
public:
	static void presentacionInicial();
	static int menu();
	static void cargaDatos(); 
	static void Dijkstra();
	static void Kruskal();
	static void Prim();
	static void salir();
};

