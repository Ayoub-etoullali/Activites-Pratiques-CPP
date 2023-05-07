#include <iostream>
#include <conio.h>

using namespace std;

class Vehicule{
	
	public :
		virtual void affiche() const;
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

void presenter(Vehicule const &v){
	
	v.affiche();
}



int main(){
	
	Vehicule *v1(0),*v2(0);
	v1=new Vehicule;
	v2=new Moto;
	
	v1->affiche();
	v2->affiche();
	
	return 0;
}
