#include "GestorArchivos.h"

GestorArchivos::GestorArchivos(){
}

void GestorArchivos::leerVertices(Arreglo<Vertices>* verti, Graph* gra){ 
	Vertices* v = nullptr;
	string ve1, ve2, pe;
	string linea = "";
	string dato = "";
	fstream infile("Tabla.csv", ios::in);
	vector <string> datos_csv;
	if (infile.is_open()) {
		while (getline(infile, linea)) {
			stringstream sl(linea);
			while (getline(sl, dato, ',')) {
				datos_csv.push_back(dato);
			}
		}
		for (int unsigned i = 0; i < datos_csv.size(); i++) {
			if (i % 3 == 0) {
				v = new Vertices(datos_csv[i], datos_csv[i + 1], datos_csv[i + 2]);
				ve1 = v->getVertice1();
				ve2 = v->getVertice2();
				pe = v->getPeso();
				char vertic1 = convertirChar(ve1);
				char vertic2 = convertirChar(ve2);
				int pesoVe = convertirInt(pe);
				gra->addEdge(vertic1, vertic2, pesoVe); 
				verti->ingresaAlArreglo(v);
			}
		}
		infile.close();
		cout << verti->toString();
	}
	else {
		cout << "Error al abrir el archivo para lectura" << endl;
	}
}

