#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;
bool FechaEsValida(int dia, int mes, int annio) {
	
	bool verificador;

	if (annio % 400 == 0)
	{
		cout << "Es un año Bisiesto";
	}
	else
	{
		if (annio % 4 == 0 && annio % 100 != 0)
		{
			cout << "Es un año Bisiesto"<<endl;
		}
		else
		{
			cout << "No es un año Bisiesto"<<endl;
		}
	}
	switch (mes)
	{
	case 1: cout << "Enero" << endl;
		break;
	case 2: 
		if (annio % 400 == 0)
		{
			if (dia>29)
			{
				cout << "(febrero solo tiene 29 dias)"<<endl;
				verificador = false;
			}
			else
			{
				cout << "Febrero" << endl;
				verificador = true;
			}
		}
		else
		{
			if (annio % 4 == 0 && annio % 100 != 0)
			{
				if (dia > 29)
				{
					cout << "(febrero solo tiene 29 dias)";
					verificador = false;
				}
				else
				{
					cout << "Febrero" << endl;
					verificador = true;
				}
			}
			else 
			{
				if (dia>28)
				{
					cout << "Febrero solo tiene 28 dias"<<endl;
					verificador = false;
				}
				else
				{
					cout << "febrero" << endl;
					verificador = true;
				}
			}
		} break;
	 
	case 3: cout << "marzo" << endl;
		verificador = true;
		break;
	case 4:
		if (dia>30)
		{
			cout << "el mes de abril solo tiene 30 dias" << endl;
			verificador = false;
		}
		else
		{
			cout << "Abril" << endl;
			verificador = true;
		}
		break;
	case 5: cout << "Mayo" << endl;
		verificador = true;
		break;
	case 6: 
			
		if (dia > 30)
		{
			cout << "el mes de junio solo tiene 30 dias" << endl;
			verificador = false;
		}
		else
		{
			cout << "Junio" << endl;
			verificador = true;
		}
		break;
	case 7: cout << "Julio" << endl;
		verificador = true;
		break;
	case 8: cout << "Agosto" << endl;
		verificador = true;
		break;
	case 9:
		if (dia > 30)
		{
			cout << "el mes de Setiembre solo tiene 30 dias" << endl;
			verificador = false;
		}
		else
		{
			cout << "setiembre" << endl;
			verificador = true;
		}
		break;
	case 10: cout << "Octubre" << endl;
		verificador = true;
		break;
	case 11:
		if (dia > 30)
		{
			cout << "el mes de Noviembre solo tiene 30 dias" << endl;
			verificador = false;
		}
		else
		{
			cout << "Noviembre" << endl;
			verificador = true;
		}
		break;
	case 12: cout << "Diciembre" << endl;
		verificador = true;
		break;
	}

	if (verificador==true)
	{
		cout << "La fecha es correcta: " << dia << " " << mes << " " << annio;
	}
	else if (verificador==false)
	{
		cout << "La fecha no es correcta: " << dia << " " << mes << " " << annio;
	}
	
	return verificador;
}

int main() {
	int a, b, c;


	do {

		cout << "ingrese el dia: ";
		cin >> a;

	} while (a <= 0 || a >= 32);

	do {

		cout << "ingrese el mes: ";
		cin >> b;

	} while (b <= 0 || b >= 13);

	do {

		cout << "ingrese el año: ";
		cin >> c;

	} while (c <= 0);

	FechaEsValida(a, b, c);
	_getch();
	return 0;
}