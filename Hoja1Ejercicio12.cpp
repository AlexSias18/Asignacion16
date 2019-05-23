#include <iostream>
#include <conio.h>

using namespace std;

float radio(float r) {
	float area;	
	area = 3.1416*(pow(r, 2));
	return area;

}
float peri(float r) {
	float perimetro;
	perimetro = 2 * (3.1416)*(r);
	return perimetro;
}

int main() {
	float rad;

	cout << "Ingrese el radio: ";
	cin >> rad;
	float resultado = radio(rad);
	cout << "Area es: " << resultado;
	float p = peri(rad);
	cout << "Perimetro " << p;
	system("pause");
	return 0;
}