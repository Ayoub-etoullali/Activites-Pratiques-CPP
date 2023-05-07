#include <iostream>
#include <conio.h>

using namespace std;

class Vehicule{
	
	public :
		Vehicule(int);
		virtual void affiche() const;
		virtual int nbrRoues() const = 0;
		virtual ~Vehicule(); 
	protected :
		int m_prix;
};

class Voiture : public Vehicule{
	
	public :
		Voiture(int,int);
		virtual void affiche() const;
		virtual int nbrRoues() const;
		virtual ~Voiture();
	private :
		int m_portes;
};

void Vehicule::affiche() const{
	
	cout << "ceci est un vehicule." << endl;
}

void Voiture::affiche() const{

	cout << "ceci est une voiture.";
}

int Vehicule::nbrRoues() const{
	
	return 4;
}

int Voiture::nbrRoues() const{
	
	return 4;
}

Vehicule::Vehicule(int prix):m_prix(prix){}

Vehicule::~Vehicule(){}

Voiture::Voiture(int prix,int portes):Vehicule(prix),m_portes(portes){}

Voiture::~Voiture(){}

int main(){
	
	Vehicule *ptr(0);
	
	Voiture caisse(20000,5);
	
	ptr = &caisse;
	cout << ptr->nbrRoues() << endl;
	
	return 0;
}
