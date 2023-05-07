#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

void essai (float x, char c, int n=0){
 	cout <<"Fonction N°1: x = "<< x <<" c = "<< c <<" n = "<< n << "\n";
 	
 }
 void essai (float x, int n){
 	cout <<"Fonction N°2: x = "<< x <<" n = "<< n << "\n";
 	
 }
 int main(){
 	char l='z';
 	int u=4;
 	float y=2.0;
 	essai(y,l,u);
 	essai(y,l);
 	essai(y,u);
 	essai(u,u);
 	essai(u,l);;
 	essai(y,y,u);
 	getch();
 		
 }
