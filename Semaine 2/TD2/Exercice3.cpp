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
	   void deplace(int,int);
	   void affiche();
	  
};

point :: point(){
	x=8;
	y=2;
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
	point u;
	u.affiche();
	getch();
	u.deplace(5,1);
	u.affiche();
	getch();
}

int main(){
	

	Scene();

	
}
