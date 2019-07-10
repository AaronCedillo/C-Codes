#include <iostream>

using namespace std;

int main() {
	int numeros[5] = {10, 20, 30, 40, 50};
	int *p;
	p = numeros;
	
	for(int n; n < 5; ++n)
		cout << *(p + n) << " ";
	return 0;
}
