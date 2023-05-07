#include <iostream>
#include <conio.h>

using namespace std;

class compteur{
	
	static int ctr;
	public :
			compteur();
			~compteur();
};

 int compteur::ctr = 0;
 
compteur :: compteur(){
	
	cout << "Un nouvel objet vient de se creer :" << "\n";
	cout << "Il y a maintenant :" << ++ctr << " Objets \n\n";
	getch();
	
};

compteur :: ~compteur(){
	
	cout << "Un objet vient de se detruire :" << "\n";
	cout << "Il reste maintenant :" << --ctr << " Objets \n\n";
	getch();
}

int main(){
	
	void Essai();
	
	compteur a;
	Essai();
	compteur b;
}

void Essai(){
	
	compteur u,v;
}
