#include <iostream>
#include <conio.h>
#include<windows.h>

using namespace std;

class vecteur{
	
	public :
			float x,y;
			vecteur(float,float);
			vecteur homothethie(float);
			void affiche();
			float det(vecteur,vecteur);
};


vecteur::vecteur(float abs=0,float ord=0){
	
	x=abs; y=ord;
}

vecteur vecteur :: homothethie(float val){
	vecteur k(1.5,3.9);
	k.x=k.x*val; k.y=k.y*val;
	return k;
}	

void vecteur :: affiche(){
	
	cout << "x = " << x << " |  y = " << y << endl;
}

float vecteur :: det(vecteur a,vecteur b){
	
	cout << "det( (" << a.x<< "," << a.y << ") , (" <<  b.x<< "," << b.y <<") ) = " << a.x*b.y-a.y*b.x << endl ;
}

int main(){
		
		float det=0.1;
		vecteur hom;
		vecteur a(1,7), b(5,8);
		
		a.affiche();
		
		hom=hom.homothethie(5);
		hom.affiche();
		
		det=a.det(a,b);
}

