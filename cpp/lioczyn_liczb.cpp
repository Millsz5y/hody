


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int iloczyn, a, i;
	
	i=0;
	a=0;
	iloczyn = 1;
	
	
/*	cout << "Podaj liczbę początkową: ";
*	cin >> start;
*	cout << "Podaj liczbę końcową: ";
*	cin >> koniec;
* int start, koniec;
* start=koniec=0;
*/	
	
	for (i=0; i < 10;i++){
		cout<<"Podaj liczbę: ";
		cin>>a;
		iloczyn=iloczyn*a;
		
	}
	cout << iloczyn;
	
	
	
	
	
	return 0;
}

