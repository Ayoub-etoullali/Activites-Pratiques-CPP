#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

double puissance(double a,int b){
	return pow(a,b);
}

int main(){
	
	
	double x, p;
	int n;
	
	cout << "Saisir un reel: " << endl;
	cin >> x;
	cout << "Saisir la puissance: " << endl;
	cin >> n;
	
	p=puissance(x,n);
	cout << "\n" << x <<  " a la puissance " << n << " est : " << p << endl;
	
	getch();
	return 0;
}

