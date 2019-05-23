#include<iostream>
#include<conio.h>
using namespace std;
void Invertir(int *Operacion) {
	int numeroInv =0 , resto, numero;

	while (*Operacion > 0) {

		resto = *Operacion % 10;
		*Operacion = *Operacion / 10;
		numeroInv = numeroInv * 10 + resto;
	}
	  	cout << "El numero invertido es: " << numeroInv << endl;
}


int fKE() {
	int n;

	do {
		cout << "ingrese un numero: ";
		cin >> n;
	} while (n <= 999);

	int *Puntero;

	Puntero = &n;

	Invertir(Puntero);




	_getch();
	return 0;
}