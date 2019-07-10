#include <iostream>
#include <stdlib.h>

using namespace std;

struct pelicula {
	char titulo[50];
	int anio;
};

int main() {
	char cadena[50];
	pelicula peli;
	pelicula *ppeli;
	ppeli = & peli;
	cout << "Ingrese titulo: ";
	cin.getline(ppeli-> titulo, 50);
	cout << "Ingresar anio: ";
	cin.getline(cadena, 50);
	ppeli -> anio = atoi(cadena);
	cout << "\n Usted a ingresado:\n";
	cout << ppeli -> titulo;
	cout << " (" << ppeli -> anio << ") \n";
	return 0;
}
