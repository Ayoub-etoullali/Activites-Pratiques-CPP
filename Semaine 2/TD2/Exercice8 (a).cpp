#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

class complexe{
	
	
	public :
		
	int reel, img;
	
	void estComplexe(int r, int i); 		
	double Module(int r, int i);	
	void affiche();
};

void estComplexe(int r, int i){
	
	if (i==0)  cout << "le nombre " << r << " n'est pas complexe" << endl;
	else  	   cout << "le nombre " << r << " + " << i << "i  est complexe" << endl;
	
}

double Module(int r, int i){
	
	double s;
	s=sqrt(r*r+i*i);
	return s;
}

void complexe :: affiche(){
	
	cout << "le nombre : " << reel << " + " << img << " i" << endl;
	
}

int main(){
	
	complexe C;
	double M;
	C.reel=8;
	C.img=1;
	
	estComplexe(5,0);
	 		
	M = Module(10,2);	
	cout << "le module est : " << M << endl;
	
	C.affiche();
	
}


