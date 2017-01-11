#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int n[100];

	for (int i = 1; i < 101; i++) {

		if ((i % 3 == 0) && (i % 5 != 0)) {
			cout << "Fizz" << endl;
		}
		if ((i % 5 == 0) && (i % 3 != 0)) {
			cout << "Fuzz" << endl;
		}
		if ((i % 3 == 0) && (i % 5 == 0)) {
			cout << "FizzFuzz" << endl;
		}
		else if ((i % 3 != 0) && (i % 5 != 0)) {
			n[i] = i;
			cout << n[i] << endl;
		}
	}
	getchar(); // para que no se cierre inmediatamente
    return 0;
}