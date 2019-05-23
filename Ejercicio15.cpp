#include <iostream>
#include<stdio.h>
#include <conio.h>

using namespace std;

int combinatorio(int n) {
	if (n==0)
	{
		n = 1;
	}
	else
	{
		n = n * (n - 1);
	}
	return n;
}
int combina2(int k) {
	if (k == 0)
	{
		k = 1;
	}
	else
	{
		k = k * (k - 1);
	}
	return k;
}
int combina3(int resta) {
	if (resta == 0)
	{
		resta = 1;
	}
	else
	{
		resta = resta * (resta - 1);
	}
	return resta;
}

int main() {
	int a, b, c;
	cout << "Ingrese los 2 valores: ";
	cin >> a >> b;
	c = a - b;
	cout << "Combinatorio " << combinatorio(a) /( combina2(b)*combina3(c));

	_getch();
	return 0;
}