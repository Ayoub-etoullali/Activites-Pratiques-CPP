#include <iostream>
#include <conio.h>

	
using namespace std;

class Note {
	
	public :
		double input();
		double value;
		void print();
		double Moyenne(Note*,int);		
		void Harmonise(Note &);
		void appreciation(Note *, int);
};

double Note::input(){
	
	cout << "Saisir une note entre 0 et 20 : ";
	cin >> value;
	return value;
}

void Note::print(){

	cout << "La note est : " << value << endl;
}

double Note::Moyenne(Note* a,int nbr){
	double S=0;  int i;
	S+=a->value+value;
	
	return S/nbr;
}

void Note::appreciation(Note *n, int i){
		n->value=i;
		if(18<i && n->value<=20) cout << "Excelente";
		else if (16<n->value && n->value<=18) cout << "T.B";
		else if(14<n->value && n->value<=16) cout << "B";
		else if (12<n->value && n->value<=14) cout << "A.B";
		else if (10<=n->value && n->value<=12) cout << "Passable";
		else if(0<n->value && n->value<10) cout << "Faible";
		else cout << "ERROR 404";
	}
	
void Note::Harmonise(Note &m){
	
	if(m.value<8) m.value=0;
	else m.value=8;
}



int main(){
	
	Note a,b;   char c;
	double s,k;
	k=a.input();
	s=b.input();
	cout << "|a| \t";  a.print();
	a.Harmonise(b);
	cout << "|b| \t"; b.print(); cout << endl;
	getch();
	cout << "La moyenne de classe : " << b.Moyenne(&a,2) << endl;
	cout << "appreciation de la valeur 11 : " << endl;
	a.appreciation(&a,11);
	return 0;
}
