#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int n;
	char tc[30], c;
	float x;
	
	cout << "Saisir un entier:";
	cin >> n;
	cout << "Saisir un reel:";
	cin >> x;
	cout << "Saisir une phrase:";
	cin >> tc;
	cout << "Saisir une lettre:";
	cin >> c;
	cout << "Affichage : " << n << " " << x << " " << tc << " " << c << "\n";
	
	getch();
	return 1;
	
}
