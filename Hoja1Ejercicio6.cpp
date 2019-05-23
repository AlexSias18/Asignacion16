#include <iostream>
#include <conio.h>

using namespace std;

double cambioDolares(double cantidad, double tipodecambio) {
	
	return tipodecambio*cantidad;
}

double cambioSoles(double cantidad, double cambioSole) {
	return cantidad / cambioSole;
}


int main() {
	int operacion=4;
	double cantidad, tipodecambio=3.30;
	double cambioSole=3.34;

	
	while (operacion!=3)
	{
		cout << "Ingrese que quiere [1]Dolares [2] Soles [3]Terminar: ";
		cin >> operacion;
		switch (operacion)
		{
		case 1:
			cout << "Cantidad: ";
			cin >> cantidad;
			cout << "La cantidad  es " << cambioDolares(cantidad, tipodecambio)<<" soles"<<endl;
			break;
		case 2:
			cout << "Ingrese cantidad: ";
			cin >> cantidad;
			cout << "La cantidad  es " << cambioSoles(cantidad, cambioSole) << " dolares"<<endl;
			break;

		default:
			break;
		}


	}

}