#include <iostream>
#include <conio.h>

using namespace std;

class liste {
	
	int taille;
	float *adr;
	public : 
		liste(int);
		~liste();
};

liste :: liste(int t){
	
	taille=t;
	adr=new float[taille];
	cout << "Construction " << endl; 
	cout << "Adresse de l'objet : " << this << endl; 
	cout << "Adresse de liste : " << adr << endl; 
}

liste :: ~liste(){
	
	cout << "Destruction " << endl; 
	cout << "Adresse de liste : " << adr << endl;
	delete adr;
}


int main(){
	
	cout << "Debut de main() \n";
	liste a(3);
	liste b=a;
	cout << "\n Fin de main() \n" << endl;
	getch();
}
