#include <iostream>
#include <conio.h>

using namespace std;

class point {
	
	int x,y;
	public : 
		point(int,int);
		point(point &);
		point symetrique();
		void affiche(){
			cout << "x=" << " y=" << y << endl;
		}
		~point();
};

point :: point(int abs=0, int ord=0){
	
	x=abs;  y=ord;
	cout << "Construction du point " << x << " " << y << endl; 
	cout << "Adresse " << this << endl;
}

point :: point(point &pt){
	
	x=pt.x;  y=pt.y;
	cout << "Construction par copie du point " << x << " " << y << endl; 
	cout << "Adresse " << this << endl;
}

point point :: symetrique(){
	
	point res;
	cout << "******************************************" << endl;
	res.x=-x;
	res.y=-y;
	cout << "##########################################" << endl;
	return res;
}

point :: ~point(){
	
	cout << "Destruction du point " << x << " " << y << endl;  
	cout << "Adresse " << this << endl;
}

int main(){
	
	cout << "Debut de main() \n";
	
	point a(1,4), b;
	cout << "Avant appel à symetrique \n";
	b=a.symetrique();
	b.affiche();
	cout << "Apres appel à symetrique et fin de main() \n";
	getch();
}
