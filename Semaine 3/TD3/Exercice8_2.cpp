#include <iostream>
#include <conio.h>
#include<windows.h>

using namespace std;

class vecteur{
	
	public :
			float x,y;
			vecteur(float,float);
			vecteur *homothethie(float*);
			void affiche();
			float det(vecteur,vecteur);
};


vecteur::vecteur(float abs=0,float ord=0){
	
	x=abs; y=ord;
}

vecteur *vecteur :: homothethie(float *val){
	vecteur s(5,9);
	s.x=s.x*(*val); s.y=s.y*(*val);
	return &s;
}	

void vecteur :: affiche(){
	
	cout << "x = " << x << " |  y = " << y << endl;
}

float vecteur :: det(vecteur a,vecteur b){
	
	cout << "det( (" << a.x<< "," << a.y << ") , (" <<  b.x<< "," << b.y <<") ) = " << a.x*b.y-a.y*b.x << endl ;
}

int main(){
	
		float k=5;
		float det;
		vecteur a(1,7), b(5,8);
		vecteur *hom=&a;
		a.affiche();
		
		*hom=*a.homothethie(&k);
		hom->affiche();
		
		det=a.det(a,b);
}

