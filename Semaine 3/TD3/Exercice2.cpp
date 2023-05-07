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

class point{
	
	int x,y;
	public :
			point();
			point(int);
			point(int,int);
			void affiche();
			void affiche(char *);
};

point :: point(){
	x=0; y=0;
}

point :: point(int a){
	x=a; y=a;
}

point :: point(int a,int b){
	x=a; y=b;
}

void point :: affiche(){
	gotoxy(x,y);
	cout << "*";
}

void point :: affiche(char *c){
	affiche();
	cout << " char c'est : " << c << endl;
}

int main(){
	
	point a,b(5),c(4,9);
	char text[]="ayoub";
	
	a.affiche(text);
	
	b.affiche();
	c.affiche();
	
}
