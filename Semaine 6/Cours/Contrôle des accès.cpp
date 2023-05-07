#include <iostream>
#include <conio.h>

using namespace std;

class point{
	
	protected :
		int x,y;
	public :
		point(){
			x=3; y=5;
		}
		affiche();
};

class pointcol : public point{
	
	short couleur;
	public :
		void affiche(){
			
			cout << "x=" << x << " y=" << y << endl;
		} 
};


int main(){
	
	pointcol a;
	a.affiche();
	}
