#include <iostream>
#include <conio.h>

using namespace std;

class Vehicule{
	
	public :
		void affiche() const;
	protected :
		int m_prix;
};

class Voiture : public Vehicule{
	
	public :
		void affiche() const;
	private :
		int m_portes;
};

class Moto : public Vehicule {
	
	public :
		void affiche() const;
	private :
		double m_vitesse;
};

void Vehicule::affiche() const{
	
	cout << "ceci est un vehicule." << endl;
}

void Voiture::affiche() const{

	cout << "ceci est une voiture.";
}

void Moto::affiche() const{

	cout << "ceci est une moto.";
}



int main(){
	
	Vehicule v;
	v.affiche();
	
	Moto m;
	m.affiche();
	
	return 0;
}
