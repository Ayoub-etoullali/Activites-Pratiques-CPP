#include <iostream>
#include <conio.h>

using namespace std;

class vecteur {
	
	float x,y;
	public : 
		vecteur(float,float);
		void affiche();
		vecteur operator+(vecteur);
		float operator*(vecteur);
		vecteur operator*(float);
};

vecteur :: vecteur(float abs=0,float ord=0){
	
	x=abs;  y=ord;
}

void vecteur :: affiche(){
	
	cout << "(x,y)=(" << x << "," << y << ")\n";
}

vecteur vecteur :: operator+(vecteur v){
	
	vecteur res;
	res.x=v.x+x;
	res.y=v.y+y;
	return res;
}

float vecteur :: operator*(vecteur v){
	
	float z;
	z=v.x*x+v.y*y;
	return z;
}

vecteur vecteur :: operator*(float h){
	
	vecteur res;
	res.x=h*x;
	res.y=h*y; 
	return res;
}

int main(){
	
	float h=3;
	cout << "La somme : \n";
	vecteur a(2,6),b(4,8),c,d,e,f;
	c=a+b;   c.affiche();
	d=a.operator+(b);   d.affiche();
	e=b.operator+(a);  	e.affiche();
	f=a+b+c; 	f.affiche();
	getch();
	cout << "\n\nProduit scalaire : " << a*b << endl;
	getch();
	cout << "\n\nProduit scalaire : ";
	f=a*h;   f.affiche();  
	f=a*5;   f.affiche();
	return 1;
}
