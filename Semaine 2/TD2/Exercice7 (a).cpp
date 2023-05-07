#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

class hasard{
	int val[10];
	public :
			hasard(int);
			void affiche();
};

hasard :: hasard(int max){
	
	int i;
	
	for(i=0;i<10;i++)
		val[i]=(double)rand()/RAND_MAX*max; 
		// La fonction rand() est utilisée en C/C++ pour générer des nombres aléatoires dans la plage [0, RAND_MAX].
};

void hasard :: affiche(){
	
	int i;
	
	for(i=0;i<10;i++)
		cout << val[i] << " ";
	
	cout << "\n";
}

int main(){
	
	
	hasard suite1(5);
	suite1.affiche();
	getch();
	
	hasard suite2(12);
	suite2.affiche();
	getch();
}
