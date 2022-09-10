#include "Vista.h"
#include <Windows.h>

void Vista::presentacionInicial() {
	cout << "--------------Bienvenidos------------------" << endl;
	cout << "---------------a CoMHMER-------------------" << endl;
	cout << "-------------------------------------------" << endl;
	Sleep(1500);
	system("cls");
}

int Vista::menu() {
	int opcion;
	int aux = 0;
	system("cls");
	cout << "------------------------------------------" << endl;
	cout << "-------------MENU PRINCIPAL---------------" << endl;
	cout << "------------------------------------------" << endl;
	cout << "    1- Cargar datos automaticos" << endl;
	cout << "    2- Algoritmo de Dijkstra" << endl;
	cout << "    3- Algoritmo de Kruskal" << endl;
	cout << "    4- Algoritmo de Prim" << endl;
	cout << "    5- Salir                              " << endl;
	cout << "------------------------------------------" << endl;
	cout << "     Digite la opcion..: ";
	opcion = Validacion::validaInt(aux);
	system("cls");
	return opcion;
}

void Vista::cargaDatos(){
	cout << "------------Cargar datos automaticos---------------" << endl;
	cout << "Datos cargados: 15" << endl;
}

void Vista::Dijkstra(){
	cout << "------------Algoritmo de Dijkstra---------------" << endl;
}

void Vista::Kruskal(){
	cout << "------------Algoritmo de Kruskal---------------" << endl;
}

void Vista::Prim(){
		cout << "------------Algoritmo de Prim---------------" << endl;
}

void Vista::salir(){
	cout << "------------------------------------------------" << endl;
	cout << "-----------------MUCHAS GRACIAS-----------------" << endl;
	cout << "--------POR UTILIZAR NUESTRA APLICACION---------" << endl;
	cout << "------------------------------------------------" << endl;
}

