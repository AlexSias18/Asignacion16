#include <iostream>
#include <conio.h>

using namespace std;

float radio(float r) {
	float area;
	area = 3.1416*(pow(r, 2));
	return area;

}

int main() {
	float rad;
	
	cout << "Ingrese el radio: ";
	cin >> rad;
	float resultado = radio(rad);
	cout << "Resultado es: " << resultado;
	system("pause");
	return 0;
}