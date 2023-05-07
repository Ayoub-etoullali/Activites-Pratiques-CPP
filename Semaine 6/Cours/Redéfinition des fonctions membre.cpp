#include <iostream>
#include <conio.h>

using namespace std;

class point{
	
	int x,y;
	public :
		void initialise(int abs, int ord){
			
			x=abs;  y=ord;
		}
		void deplace(int dx,int dy){
			
			x=x+dx;  y=y+dy;
		}
		void affiche(){
			
			cout << "le point est en " << x << " " << y << endl;
		}
};
class pointcol : public point{
	
	short couleur;
	public :
		void colore(short c){
			
			couleur = c;
		}
		void affiche();
		void initialise(int,int,short);
};

void pointcol::affiche(){
	
	point::affiche();
	cout << "couleur : " << couleur << endl;	
}

void pointcol::initialise(int abs,int ord,short c){
	
	point::initialise(abs,ord);
	couleur=c;
}

int main(){
	
	pointcol p;
	p.initialise(10,5,2);
	p.affiche();
	p.point::affiche();
	p.deplace(2,4);
	p.affiche();
	p.colore(5);
	p.affiche();
}
