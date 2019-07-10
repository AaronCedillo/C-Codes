#include <iostream>

using namespace std;

void incrementar (void *dato, int tipo)
{
	switch(tipo) {
		case sizeof(char) : (*((char*)dato)) ++; break;
		case sizeof(short) : (*((short*)dato)) ++; break;
		case sizeof(long) : (*((long*)dato)) ++; break;
	}
}

int main() {
	char a = 5;
	short b = 9;
	long c = 12;
	incrementar (&a, sizeof(a));
	incrementar (&b, sizeof(b));
	incrementar (&c, sizeof(c));
	
	cout << (int)a << ", " << b << ", " << c; return 0;
}

