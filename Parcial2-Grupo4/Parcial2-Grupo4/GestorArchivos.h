#pragma once
#include <iostream>
#include <sstream>
#include <string>
#include <stdio.h>
#include <fstream>
#include <vector>
#include "Arreglo.h"
#include "Vertices.h"
#include "Graph.h"
#include"Utiles.h"
using namespace std;

class GestorArchivos {
public:
	GestorArchivos();
	void leerVertices(Arreglo<Vertices>* verti, Graph* gra);
};

