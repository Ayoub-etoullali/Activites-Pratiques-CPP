#include <iostream>
#include <conio.h>
#include<windows.h>

using namespace std;

class vecteur{
	
	public :
			float x,y;
			vecteur(float,float);
			void homothethie(float);
			void affiche();
			float det(vecteur,vecteur);
};


vecteur :: vecteur(float abs=0,float ord=0){
	
	x=abs; y=ord;
}

void vecteur :: homothethie(float val){
	
	x=x*val; y=y*val;
}	

void vecteur :: affiche(){
	
	cout << "x = " << x << " |  y = " << y << endl;
}

float vecteur :: det(vecteur a,vecteur b){
	
	cout << "det( (" << a.x<< "," << a.y << ") , (" <<  b.x<< "," << b.y <<") ) = " << a.x*b.y-a.y*b.x << endl ;
}

int main(){
		
		float det=0.1;
		vecteur a(1,7), b(5,8);
		
		a.affiche();
		
		a.homothethie(5);
		a.affiche();
		
		det=a.det(a,b);
}

