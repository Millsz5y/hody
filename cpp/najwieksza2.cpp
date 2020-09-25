using namespace std;


#include <iostream>

int main(int argc, char **argv)
{
	int a,b;
	a = b = 0;
	cout << "Podaj 1 liczbę: ";
	cin >> a;
	cout << "Podaj 2 liczbę: ";
	cin >> b;
	if (b>a) a = b;
	else if (b==a) cout << "liczby są równe" << endl;
	cout << "Podaj 3 liczbę";
	cin >> b;
	if (b>a) a=b;
	else if (b==a) cout << "liczby są równe" << endl;
	cout << "Największa liczba to: " << a << endl;
	
	return 0;
}

