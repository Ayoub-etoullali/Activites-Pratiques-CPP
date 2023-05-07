#include <iostream>
#include <conio.h>

using namespace std;

class point {
	
	int x,y;
	public :
		point(int abs,int org){
			
			cout << "++Const.point: " << "\n";
			x=abs;   y=org;
		}
		~point(){
			
			cout << "Dest.point: " << endl;
		}
		void affiche(){
			
			cout << "Coordonnées : " << x << " " << y << endl;
		}
};

class coul{
	
	short couleur;
	public :
		coul(int cl){
			
			cout << "++Const.coul: " << endl;
			couleur=cl;
		}
		~coul(){ 
			
			cout << "--Dest.coul: " << couleur << endl;
		}
		void affiche(){
			cout << "couleur :" << couleur << endl;
		}
};

class pointcol : public point, public coul{  
	
	public :
		pointcol(int,int,int);
		~pointcol(){
			
			cout << "--Dest.pointcol" << endl;
		}
		void affiche(){
			
			point :: affiche();
			coul :: affiche();
		}
};

pointcol :: pointcol(int abs,int org,int cl) : point(abs,org), coul(cl){
	
	cout << "++Const.pointcoul" << endl;
}

int main(){
	
	pointcol p(3,9,2);
	cout << "------------------------\n";
	p.affiche();
	cout << "------------------------\n";
	p.point :: affiche();
	cout << "------------------------\n";
	p.coul :: affiche();
	cout << "------------------------\n";
}
