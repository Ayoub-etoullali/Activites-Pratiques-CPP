#include <iostream>
#include <conio.h>

using namespace std;

class point {
	
	int x,y;
	public : 
		point(int,int);
		~point();
};

point :: point(int abs=0, int ord=1){
	
	x=abs;  y=ord;
	cout << "Construction du point " << x << " " << y << endl; 
}

point :: ~point(){
	
	cout << "Destruction du point " << x << " " << y << endl; 
}


int main(){

	
	point a;
	
	cout << "e" << endl; 
}
