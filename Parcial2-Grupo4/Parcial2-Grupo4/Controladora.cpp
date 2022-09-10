#include "Controladora.h"

Controladora::Controladora() : ges(new GestorArchivos()), verti(new Arreglo<Vertices>(16)), g(new Graph(9,14)) {
}

void Controladora::control1(){
	Vista::presentacionInicial();
	try {
		int opcion;
		do {
			opcion = Vista::menu();
			switch (opcion) {
			case 1:
				cargarDatos();
				break;
			case 2:
				Dijkstra();
				break;
			case 3:
				Kruskal();
				break;
			case 4:
				Prim();
				break;
			case 5:
				salir();
				break;
			default:
				int aux = 0;
				cout << "Debe digitar un numero del 1 al 5" << endl;
				Validacion::validaInt(aux);
			}
		} while (opcion != 5);
	}
	catch (const char* excepcion) {
		cout << excepcion << endl;
	}
	catch (...) {
		cout << "Hubo un problema inesperado. " << endl;
	}
}

void Controladora::cargarDatos(){
	Vista::cargaDatos();
	ges->leerVertices(verti,g); 
	system("pause");
}

void Controladora::Dijkstra(){
	char op;
	int numero, aux = 0;
	bool bandera = false;
	Vista::Dijkstra();
	cout << " ________________________________________________" << endl;
	cout << "|                    OPCIONES                    |" << endl;
	cout << "| Vertice A = 1    Vertice B = 2   Vertice C = 3 |" << endl;
	cout << "| Vertice D = 4    Vertice E = 5   Vertice F = 6 |" << endl;
	cout << "| Vertice G = 7    Vertice H = 8   Vertice I = 9 |" << endl;
	cout << "|________________________________________________|" << endl;
	cout << "En cual vertice desea inicia(numero entre 1-9): ";
	numero = Validacion::validaInt(aux);
	if ( numero < 1 || numero > 9) {
		while (numero < 1 || numero > 9) {
			cout << "Error, numero invalido" << endl;
			cout << "En cual vertice desea inicia(numero entre 1-9): ";
			numero = Validacion::validaInt(aux);
		}
	}
	op = convertirEspecial(numero);
	g->shortestPath(op);
	system("pause");
}

void Controladora::Kruskal(){
	Vista::Kruskal();
	cout << endl << "Peso: " << g->kruskalMST() << endl;
	system("pause");
}

void Controladora::Prim(){
	Vista::Prim();
	g->primMST();
	system("pause");
}

void Controladora::salir(){
	Vista::salir();
}

Controladora::~Controladora(){
	delete ges;
	delete g;
	delete verti;
}


