#include <iostream>
#include <conio.h>

using namespace std;

class point {
	
	int x,y;
	public : 
		point(int abs=0, int ord=0){
			
			x=abs;
			y=ord;
		}
		friend int coincide(point,point);
};

int coincide(point p,point q){
	if((p.x==q.x)&&(p.y==q.y))
		return 1;
	else
		return 0;
}

int main(){
	
	point a(4,0),b(4),c;
	if(coincide(a,b))
		cout << "a coincide avec b\n";
	else
		cout << "a est different de c\n";
	
	getch();
	return 0;
}
