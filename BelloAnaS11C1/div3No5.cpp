#include<iostream>

using namespace std;

int main()
{
	cout <<"Numeros divisibles por 3 y no multiplos de 5 son:" << endl;

	for( int i=0; i<=100;i++)
	{
		if(i%3==0 && i%5!=0)

		cout << i << endl;
	}

	return 0;
}