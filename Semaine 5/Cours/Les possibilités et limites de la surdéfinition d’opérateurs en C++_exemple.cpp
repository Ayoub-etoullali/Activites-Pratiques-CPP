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
		void operator=(liste &);
		~liste();
};

liste::liste(int t){
	
	taille =t;   adr=new float[taille];
	cout << "Constructeur" << endl;
	cout << "Adresse de l'objet : " << this << endl;
	cout << "Adresse de liste : " << adr << endl;
}

liste::~liste(){
	cout << "Destruction adresse de l'objet : " << this<< endl;
	cout << "Adresse de liste : " << adr <<  endl;;
	delete adr;
}

liste::liste(liste &v){
	
	taille = v.taille;   adr=new float[taille];
	for (int i=0;i<taille;i++)
		adr[i]=v.adr[i];
	cout << "\nConstructeur par recopie"<< endl;
	cout << "Adresse de l'objet : " << this<< endl;
	cout << "Adresse de liste : " << adr << endl;
}

void liste :: saisie(){
	
	int i;
	for(i=0;i<taille;i++){
		
		cout << "Entrer un nombre : ";
		cin >> *(adr+i);
	}
	cout << endl;
}

void liste::affiche(){
	
	int i;
	cout << "Adresse : " << this << "\n";
	for(i=0;i<taille;i++){
		
		cout << *(adr+i) << " ";
	}
	cout << endl;
}

void liste::operator=(liste &lis){
	
	int i;
	taille=lis.taille;
	delete adr;
	adr = new float[taille];
	for(i=0;i<taille;i++)
		adr[i]=lis.adr[i];
}

int main(){
	
	cout << "Debut du main"<< endl;
	liste a(5);  liste b(2);
	a.saisie();	a.affiche();
	b.saisie();  b.affiche();
	b=a;
	b.affiche();
	a.affiche();
	cout << "Fin du main"<< endl;
	return 0;
}
