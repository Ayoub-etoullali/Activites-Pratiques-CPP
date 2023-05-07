
#include <iostream>
#include <conio.h>
#include <stdlib.h>
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

struct point {
	int x;
	int y;
	char col[];
	
	
	
	void initialiser(int a,int b,char*c){
		x=a;
		y=b;
		strcpy(col,c);
	}	
	void deplacer(int a,int b){
		x=x+a;y=y+b;	
	}
	void afficher(){

		gotoxy(x,y);
		printf("*");

	}
	
	void effacer(){
		x=0; y=0;
	}
};



int main(int argc, char** argv) {
	point p1;
	p1.initialiser(2,3,"0A");
	p1.afficher();
	getch();
	p1.effacer();
	p1.deplacer(5,2);
	p1.afficher();
	getch();
	p1.effacer();
	p1.deplacer(1,5);
	p1.afficher();
	p1.effacer();
	
}
