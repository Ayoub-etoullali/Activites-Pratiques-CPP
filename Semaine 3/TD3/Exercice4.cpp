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
			
			void coincidence(int,int);
};

void point :: coincidence(int a,int b){
	
	if(a==x && b==y){
		cout << "il y a la coincidence"<< endl;
	}
	else cout << "il n'est y a pas la coincidence"<<endl;
}

int main(){
	
	point b(8),c(11,3);
	
	c.coincidence(11,4);
	b.coincidence(8,8);
	
	b.affiche();
	c.affiche();
}

