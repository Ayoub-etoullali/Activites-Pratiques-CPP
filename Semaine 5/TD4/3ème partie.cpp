#include <iostream>
#include <conio.h>

using namespace std;

class Note {
	
	public :
		double value;
		int nbr_saisie();
		Note* creer_tab(int);
		void saisie_tab(Note *,int);
		double input();
		void afficher(Note *,int);
		char appreciation(Note *, int);
		void Harmonise(Note *,int);
		void Moyenne(Note*,int);
};

int Note::nbr_saisie(){
	
	int nbr;
	cout << "Saisir le nombre d'eleves de la classe : ";
	cin >> nbr;
	return nbr;
}

Note* Note::creer_tab(int nbr){
	
	 Note *tab_Note=new Note[nbr];
	return tab_Note;
}

double Note::input(){
	
	cout << "Saisir une note entre 0 et 20 : ";
	cin >> value;
	return value;
}

void Note::saisie_tab(Note* tab,int nbr){
	
	for(int i=0;i<nbr;i++){
		
		tab[i].value=tab->input();
	}
	
}

void Note::afficher(Note *tab,int nbr){
	
	for(int i=0;i<nbr;i++){
		cout << i <<"\t";
		cout << "La note est : " << tab[i].value << endl;
}}

char Note::appreciation(Note *n, int i){
		n->value=i;
		if(18<i && n->value<=20) cout << "Excelente";
		else if (16<n->value && n->value<=18) cout << "T.B";
		else if(14<n->value && n->value<=16) cout << "B";
		else if (12<n->value && n->value<=14) cout << "A.B";
		else if (10<=n->value && n->value<=12) cout << "Passable";
		else if(0<n->value && n->value<10) cout << "Faible";
		else cout << "ERROR 404";
	}

double Moyenne(int nbr,Note *tab_Note){
	
	double S=0;  int i;
	for(i=0;i<nbr;i++){
		
		S+=tab_Note[i].value;
	}
	return S/nbr;
}
	
void Note::Harmonise(Note *m,int nbr){
	for(int i=0;i<nbr;i++)
	if(m[i].value<8) m[i].value=0;
	else m[i].value=8;
}

int main(){
	
	double m;
	Note t;	double M;
	int nbr,i;
	nbr=t.nbr_saisie();
	Note *tab=t.creer_tab(nbr);
	tab->saisie_tab(tab,nbr);
	tab->afficher(tab,nbr);
	tab->appreciation(tab,15); cout << 	"\n\n";
	for(i=0;i<nbr;i++){
		
		if(tab[i].value<15) tab[i].value=10;
	}
	tab->Harmonise(tab,nbr);
	cout << "\nLa moyenne de classe : " << Moyenne(nbr,tab) << endl;
	return 0;
}
