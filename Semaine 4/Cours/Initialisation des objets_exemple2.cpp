#include <iostream>
#include <conio.h>

using namespace std;

class liste {
	
	int taille;
	float *adr;
	public : 
		liste(int);
		liste(liste &);
		~liste();
};

liste :: liste(int t){
	
	taille=t;
	adr=new float[taille];
	cout << "Construction " << endl; 
	cout << "Adresse de l'objet : " << this << endl; 
	cout << "Adresse de liste : " << adr << endl; 
}

liste :: liste(liste &v){
	
	taille=v.taille;
	adr=new float[taille];
	for(int i=0;i<taille;i++)
		adr[i]=v.adr[i];
	cout << "Construction par recopie" << endl; 
	cout << "Adresse de l'objet : " << this << endl; 
	cout << "Adresse de liste : " << adr << endl; 
}

liste :: ~liste(){
	
	cout << "Destruction adresse de l'objet : "<< this << endl; 
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
