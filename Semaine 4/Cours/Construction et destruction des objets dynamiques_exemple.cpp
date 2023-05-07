#include <iostream>
#include <conio.h>

using namespace std;

class point {
	
	int x,y;
	public : 
		point(int,int);
		~point();
};

point :: point(int abs, int ord){
	
	x=abs;  y=ord;
	cout << "Construction du point " << x << " " << y << endl; 
}

point :: ~point(){
	
	cout << "Destruction du point " << x << " " << y << endl; 
}


int main(){
	
	void fct(point *);
	point *adr;
	
	cout << "Debut de main() \n";
	adr = new point(3,7);
	fct(adr);
	delete adr;
	cout << "\n Fin de main() \n" << endl;
	getch();
}

void fct(point *adp){
	
	cout << "Debut de la fonction " << endl;
	delete adp;
	cout << "Fin de la fonction " << endl;
}
