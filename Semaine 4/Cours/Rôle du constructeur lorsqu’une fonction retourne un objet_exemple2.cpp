#include <iostream>
#include <conio.h>

using namespace std;

class liste {
	
	int taille;
	float *adr;
	public : 
		liste(int);
		liste(liste &);
		void saisie();
		void affiche();
		liste oppose();
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

void liste::saisie(){
	
	int i;
	for(i=0;i<taille;i++){
		cout << "Entrer un nombre : ";
		cin >> *(adr+i); 
	}
}

void liste::affiche(){
	
	int i;
	for(i=0;i<taille;i++)
		cout << *(adr+i);
	cout << "adresse de l'objet : " << this << "adresse de liste : " << adr << endl;
}

liste liste::oppose(){
	
	int i;
	liste res(taille);
	for(i=0;i<taille;i++)
		res.adr[i]=-adr[i];
	for(i=0;i<taille;i++)
		cout << res.adr[i] << " | ";	
	cout << "\n";
	return res;
}

int main(){
	
	cout << "Debut de main() \n";
	liste a(3),b(3);
	a.saisie();
	a.affiche();
	b=a.oppose();
	b.affiche();
	cout << "\n Fin de main() \n" << endl;
	getch();
	
	return 0;
}
