#include <iostream>
#include <conio.h>

using namespace std;

class vecteur {
	
	public :
		int x,y; 
		vecteur(int abs=0, int ord=0){
			
			x=abs;
			y=ord;
		}
		friend vecteur operator+(vecteur,vecteur);
		
};

vecteur operator+(vecteur k,vecteur s){
			vecteur res;
			res.x=k.x+s.x;
			res.y=k.y+s.y;
			return res;
		}

int main(){
	
	vecteur a(4,1),b(8,-6),c;
	cout << "a(x = " << a.x << ", y = " << a.y << ") \n"; 
	cout << "b(x = " << b.x << ", y = " << b.y << ") \n"; 
	c=a+b;
	cout << "c(x = " << c.x << ", y = " << c.y << ") \n"; 
	getch();
	return 0;
}
