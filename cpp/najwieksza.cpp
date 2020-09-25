

#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int a,b,c;
	a=b=c=0;
	
	cout << "Podaj pierwszą liczbę: ";
	cin >> a;
	
	cout << "Podaj drugą liczbę: ";
	cin >> b;
	
	cout << "Podaj trzecią liczbę: ";
	cin >> c;
	
	cout << "Największa liczba to: ";
	if ((a>b) && (a>c)) cout << a;
	if ((b>a) && (b>c)) cout << b;
	if ((c>a) && (c>b)) cout << c;
	return 0;
}

