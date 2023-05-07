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
	   point(int,int);
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

void Scene(){
	point u(2,5);
	u.affiche();
	getch();
	u.deplace(0,3);
	u.affiche();
	getch();
}

int main(){
	

	Scene();

	
}
