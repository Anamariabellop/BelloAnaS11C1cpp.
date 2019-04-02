#include<iostream>

using namespace std;

int main()
{
	int numfactorial;
	numfactorial=1;
	int numero;
	
	cout<< "Ingrese el valor n";

	cin>> numero;

	for( int i=1; i<=numero ;i++)
	{
		numfactorial= numfactorial*i;
	}

	cout <<"Factorial de n es: " << numfactorial << endl;
}