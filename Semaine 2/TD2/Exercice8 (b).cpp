#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

class complexe{
	
	
	public :
		
	int reel, img;
	
	complexe(int r, int i);
	complexe(int r);
	complexe();
	void estComplexe(int r, int i); 		
	double Module(int r, int i);	
	void affiche();
};

complexe :: complexe(int r, int i){
	
	reel=r;
	img=i;
}

complexe :: complexe(int r){
		
	reel=r;
	img=0;
}

complexe :: complexe(){
	reel=0;
	img=0;
}
	
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
	
	complexe A(5,8),B(3),C;
	double M;
	
	A.affiche();
	B.affiche();
	C.affiche();
	estComplexe(5,0);		
	M = Module(10,2);	
	cout << "le module est : " << M << endl;
}
