

#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	
	int bok1;
	int bok2;
	int bok3;
	
	bok1=0;
	bok2=0;
	bok3=0;
	cout << "Wprowadź pierwszy bok ";	
	cin >> bok1;
	cout << "Wprowadź drugi bok ";
	cin >> bok2;
	cout << "Wprowadź trzeci bok ";
	cin >> bok3;
	if ((bok1 + bok2 > bok3) && (bok1 + bok3 > bok2) && (bok2 + bok3 > bok1))
	cout << "Da się";
	else
	cout << "Impossibile";
	return 0;
}

