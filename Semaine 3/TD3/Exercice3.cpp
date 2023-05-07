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
			point(){
				x=0; y=0;
			}
			
			point(int a){
				x=a; y=a;
			}
			
			point(int a,int b){
				x=a; y=b;
			}
			
			void affiche(){
				gotoxy(x,y);
				cout << "*";
			}
			
			void affiche(char *c){
				affiche();
				cout << " char c'est : " << c << endl;
			}
};

int main(){
	
	point a,b(5),c(4,9);
	char text[]="ayoub";
	
	a.affiche(text);
	
	b.affiche();
	c.affiche();
	
}


