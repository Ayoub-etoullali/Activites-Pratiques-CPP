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
			
			int coincide(point *adpt);
};

int point :: coincide(point *adpt){
	
	if((this->x==adpt->x) && (this->y==adpt->y))
		return 1;
	else
	 return 0;
}

int main(){
	
	point b(8),c(11,3);
	int p,q;
	p=c.coincide(&b);
	q=b.coincide(&b);
	
	cout << p << " " << q;

}

