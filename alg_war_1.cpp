
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	int w;
	w=0;
	cout << "Wprowadź wynik: ";
	cin >> w;
	if (w<0 or w>60){
	cout << "Błędne dane";
	return 0;
	}
	if (w<20) cout << "Podstawawa";
	else if (w<=40) cout << "Średniozaawasnowany";
	else if (w>40) cout << "Zaawansowany";
	
	
	
	return 0;
}

