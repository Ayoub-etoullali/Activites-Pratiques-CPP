#include <iostream>
#include <conio.h>

using namespace std;

class point {
	
	int x,y;
	public : 
		point(int,int);
		~point();
};

point :: point(int abs, int ord){
	
	x=abs;  y=ord;
	cout << "Construction du point " << x << " " << y << endl; 
}

point :: ~point(){
	
	cout << "Destruction du point " << x << " " << y << endl; 
}

point a(1,4);

int main(){
	
	cout << "Debut de main() \n";
	
	point b(5,10);
	
	cout << "\n Fin de main() \n" << endl;
	getch();
}
