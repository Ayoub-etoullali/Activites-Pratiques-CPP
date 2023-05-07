#include <iostream>
#include <conio.h>

using namespace std;

class point{
	
	int x,y;
	public :
		point(int abs=0,int ord=0){
			
			cout << "++Const.point: " << abs << " " << ord << endl;
			x=abs;  y=ord;
		}
		~point(){
			
			cout << "--Destr.point: " << x << " " << y << endl;
		}
};

class pointcol : public point{
	
	short couleur;
	public :
		pointcol(int,int,short);
		~pointcol()
		{
			
			cout << "--Destr.pointcol couleur: " << couleur << endl;
		}
};

pointcol :: pointcol(int abs=0,int ord=0,short c=1) : point (abs,ord){
	
	cout << "++Const.point: " << abs << " " << ord << " " << c << endl;
}

int main(){
	
	pointcol a(10,15,3);
	pointcol(2,3);
	pointcol c(12);
	pointcol d;
	pointcol *adr;
	adr = new pointcol(12,25);
	delete adr;
}
