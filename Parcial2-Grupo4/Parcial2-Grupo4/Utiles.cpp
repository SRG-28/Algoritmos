#include<sstream>
#include"Utiles.h"

int convertirInt(string s){
	stringstream r(s);
	int v;
	r >> v;
	return v;
}

char convertirEspecial(int s) {
	if (s == 1) {
		return 'A';
	}
	else if (s == 2) {
		return 'B';
	}
	else if (s == 3) {
		return 'C';
	}
	else if (s == 4) { 
		return 'D';
	}
	else if (s == 5) {
		return 'E';
	}
	else if (s == 6) {
		return 'F';
	}
	else if (s == 7) {
		return 'G';
	}
	else if (s == 8) {
		return 'H';
	}
	else if (s == 9) {
		return 'I';
	}
	else {
		return '0';
	}
}

char convertirChar(string s) {
	string archi = s;
	if (archi.find("A") != string::npos) {
		return 'A';
	}
	else if (archi.find("B") != string::npos) {
		return 'B';
	}
	else if (archi.find("C") != string::npos) {
		return 'C';
	}
	else if (archi.find("D") != string::npos) {
		return 'D';
	}
	else if (archi.find("E") != string::npos) {
		return 'E';
	}
	else if (archi.find("F") != string::npos) {
		return 'F';
	}
	else if (archi.find("G") != string::npos) {
		return 'G';
	}
	else if (archi.find("H") != string::npos) {
		return 'H';
	}
	else if (archi.find("I") != string::npos) {
		return 'I';
	}
	else {
		return 'X';
	}
}

