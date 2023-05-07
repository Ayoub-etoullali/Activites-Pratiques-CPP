#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

struct essai{
	int n;
	float x;
};

void Remise_a_zero(int *a, float *b){	
	*a=0;	*b=0;
	cout << "\naffiche l'essai de la fonction (par reference): \nn = " << *a << "\nx = " << *b << endl; 	
}

void Remise_a_zero(int &a, float &b){
	a=0; b=0;	
	cout << "\naffiche l'essai de la fonction (par adresse) : \nn = " << a << "\nx = " << b << endl; 
}

int main(){
	
	essai a;

	a.n=5;  a.x=-9.3;
	cout << "\naffiche l'essai de la fonction dans main (avant) : \nn = " << a.n << "\nx = " << a.x << endl;
	
	Remise_a_zero(&a.n,&a.x);
	Remise_a_zero(a.n,a.x);
	
	cout << "\naffiche l'essai de la fonction dans main (apres) : \nn = " << a.n << "\nx = " << a.x << endl;
}



