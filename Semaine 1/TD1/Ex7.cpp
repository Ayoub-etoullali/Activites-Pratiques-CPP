#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
void affiche (float x,int n=0){
  	if(n==0)
  		cout << "Affiche : 1 " << endl;
	  else if(n==0 && x==0)
	  	cout << "Affiche : 0 " << endl;
	  else 
  		cout << "Affiche : " << pow(x,n) << endl;
  }
  void affiche (int n, float x=0){
  	if(x==0)
  		cout << "Affiche : 0" << endl;
	  else if(n==0 && x==0)
	  	cout << "Affiche : 0 " << endl;
	  else 
  		cout << "Affiche : " << pow(x,n) << endl;
  }
  int main()
  {
  	int b=0;
	float a=0;
  	
  	cout << "saisir un nombre : " << endl;
  	cin >> a;
  	cout << "saisir la puissnce : " << endl;
  	cin >> b;
  	affiche(a,b);
  	getch();
  }
