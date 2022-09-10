#pragma once
#include <Windows.h>
#include "Vertices.h"
#include "Vista.h"
#include "Validacion.h"
#include "GestorArchivos.h"
#include "Graph.h"
class Controladora {
private:
	GestorArchivos* ges;
	Graph* g;
	Arreglo<Vertices>* verti;
public:
	Controladora();
	void control1();
	void cargarDatos();
	void Dijkstra();
	void Kruskal();
	void Prim();
	void salir();
	virtual ~Controladora();
};

