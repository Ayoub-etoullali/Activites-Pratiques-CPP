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

void test(){
	
	cout << "Debut de test() \n" << endl;
	point u(3,7);
	cout << "Fin de test() \n" << endl;
}

int main(){
	
	cout << "Debut de main() \n";
	point a(1,4);
	test();
	point b(5,10);
	
	for(int i=0;i<3;i++){
		
		cout << "\n Boucle tor Numero " << i << "\n";
		point(7+i,12+i);
	}
	
	cout << "\n Fin de main() \n" << endl;
	getch();
}
