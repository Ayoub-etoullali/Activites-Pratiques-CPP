#include <iostream>
#include <conio.h>
#include<windows.h>

using namespace std;
void gotoxy(int x, int y)
{
  static HANDLE h = NULL;  
  if(!h)
    h = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD c = { x, y };  
  SetConsoleCursorPosition(h,c);
}

class vecteur{
	
	int x,y;
	public :
		vecteur(int a,int b){
			x=a; y=b;
		}	
		void affiche(){
			gotoxy(x,y);			
			cout << "*";
		}	
		float prod_scal(vecteur);
		vecteur somme(vecteur);
};

float vecteur::prod_scal(vecteur v){
	
	return v.x*x+v.y*y;
}

vecteur vecteur::somme(vecteur v){
	
	x=v.x+x;
	y=v.y+y; 	
	return *this;
}

int main(){
	
	vecteur b(8,8),c(11,3);
	int p;
	
	b.affiche();
	c.affiche();
	
	c=b.somme(c);
	c.affiche();
	
	p=c.prod_scal(b); cout << "\n" << p <<"\n";
}

