#include <iostream>
#include <conio.h>

using namespace std;

class point {
	
	int x,y;
	public : 
		point(int abs=0, int ord=0){
			
			x=abs; y=ord;
			cout << "Constructeur point " << x << " " << y << endl;
		}
		
};

class poincol{
	
	point p;
	int couleur;
	public:
			poincol(int,int,int);
};

poincol :: poincol(int abs, int ord, int coul) : p(abs,ord){
	
	couleur=coul;
	cout << "Constructeur pointcol " << couleur << endl;
}

int main(){
	
	poincol a(1,3,9);
	
	return 0;
}
