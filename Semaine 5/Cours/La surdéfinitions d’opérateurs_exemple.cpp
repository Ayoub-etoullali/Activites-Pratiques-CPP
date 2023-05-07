#include <iostream>
#include <conio.h>

using namespace std;

class vecteur {
	
	float x,y;
	public : 
		vecteur(float,float);
		void affiche();
		vecteur operator + (vecteur);
};

vecteur :: vecteur(float abs=0,float ord=0){
	
	x=abs;  y=ord;
}

void vecteur :: affiche(){
	
	cout << "(x,y)=()" << x << "," << y << ")\n";
}

vecteur vecteur :: operator + (vecteur v){
	
	vecteur res;
	res.x=v.x+x;
	res.y=v.y+y;
	return res;
}

int main(){
	
	vecteur a(2,6),b(4,8),c,d,e,f;
	c=a+b;   c.affiche();
	d=a.operator +(b);   d.affiche();
	e=b.operator +(a);  	e.affiche();
	f=a+b+c; 	f.affiche();
	getch();
}
