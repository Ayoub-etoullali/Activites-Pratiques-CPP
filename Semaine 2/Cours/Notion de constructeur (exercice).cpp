#include <iostream>
#include <conio.h>
#include <windows.h>

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
	public : point(int,int);
	   		 void deplace(int,int);
	   		 void affiche();
};

 point :: point(int abs,int ord){
 	
	x=abs;
	y=ord;
}

void point :: deplace(int dx,int dy){
	
	x=x+dx;
	y=y+dy;
}

void point :: affiche(){
	
	gotoxy(x,y); 
	cout << "*";
	
}


int main(){
	
	point a(9,2),b(3,3);
	
	a.affiche();
	getch();
	a.deplace(7,7);
	a.affiche();
	getch();
	system("cls");
	b.affiche();
	getch();
}
