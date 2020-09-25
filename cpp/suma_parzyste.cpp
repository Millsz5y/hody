


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int suma, liczba;
	int start, koniec;
	
	suma = 0;
	start=koniec=0;
	
	cout << "Podaj liczbę początkową: ";
	cin >> start;
	cout << "Podaj liczbę końcową: ";
	cin >> koniec;
	
	
	for (liczba = start; liczba < koniec+1; liczba++){
		if(liczba%2==0)
		suma=suma+liczba;
	}
	cout << suma;
	
	
	
	
	
	return 0;
}

