// Semana9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>

using namespace std;

void intercambiar(int *a, int *b) {
	
	cout << "*a="<<*a << "*b="<<*b;

	int aAux, bAux;
	bAux = *b; //bAux = y
	aAux = *a; //aAux = x

	*a = bAux; //x = bAux
	*b = aAux; //y = aAux
}



int main()
{
	int x = 2;
	int y = 4;
	
	//Declarar los punteros
	int *x1, *y1;

	//Asignar la dirección de memoria
	x1 = &x;//x1 = AB001
	y1 = &y;//Y1 = AB002
	
	//Imprimiendo los valores iniciales
	cout << "Valor X: " << *x1 << " - Valor Y: " << *y1 << endl;
	cout << "Valor X: " << x << " - Valor Y: " << y << endl;

	//Llamo a la función
	intercambiar(x1, y1);

	cout<<"Valor X: " << *x1 << " - Valor Y: " << *y1 << endl;
	cout<<"Valor X: " << x << " - Valor Y: " << y << endl;

	cin.get();
	cin.get();
}


