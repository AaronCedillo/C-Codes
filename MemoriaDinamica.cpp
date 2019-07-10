#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	char ingreso[100];
	int i, n;
	int *x, dato, total = 0;
	
	cout << "Cantidad de datos?";
	cin >> i;
	
	x = new int[i];
	
	if(x == NULL) exit(1);
	for(n = 0; n < i; ++n) {
		cout << "Ingrese un numero: ";
		cin >> x[n];
	}
	cout << "Usted a ingresado estos datos: ";
	for(n = 0; n < i; ++n) {
		cout << x[n] << ", ";
	}
	delete[] x;
	return 0;
}
