#include<iostream>

using namespace std;

int main()
{
	int numfactorial;
	numfactorial=1;
	int numero;
	numero= 7;

	for( int i=1; i<=numero ;i++)
	{
		numfactorial= numfactorial*i;
	}

	cout <<"Factorial de 7 es: " << numfactorial << endl;
}