#pragma once
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Vertices{
private:
	string vertice1;
	string vertice2;
	string peso;
public:
	Vertices(string = "", string = "", string = "");
	Vertices(const Vertices&);
	void setVertice1(string);
	void setVertice2(string);
	void setPeso(string);
	string getVertice1();
	string getVertice2();
	string getPeso();
	Vertices& operator= (const Vertices&);
	friend ostream& operator<< (ostream, Vertices&);
	string toString();
	virtual ~Vertices();
};

