#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

float periradio(double *a,double *b) {
	double area,perimetro;
	area = 3.1416*(pow(*a, 2));
	perimetro = 2 * (3.1416)*(*b);
	*a = area;
	*b = perimetro;
	return *a, *b;
}


int main() {
	double rad;
	double *c;
	double *d;
	d = &rad;
	c = &rad;

	cout << "Ingrese el radio: ";
	cin >> rad;
	float resultado = periradio(c,d);
	cout << "Area es: " << *c<<endl;
	
	cout << "Perimetro " << *d<<endl;
	system("pause");
	return 0;
}