#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

void EsBisiesto() {
	int a = 0;

	while (a <= 0)
	{
		cout << "Ingrese el año: "<<endl;
		cin >> a;
	}
	if (a % 400 == 0)
	{
		cout << "Es un año Bisiesto"<<endl;
	}
	else
	{
		if (a % 4 == 0 && a % 100 != 0)
		{
			cout << "Es un año Bisiesto"<<endl;
		}
		else
		{
			cout << "No es un año Bisiesto"<<endl;
		}
	}
}

int main() {
	EsBisiesto();

	_getch;
	system("pause");
	return 0;
}