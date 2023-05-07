#include <iostream>
#include <conio.h>

using namespace std;

class Note {
	
	double value;
	public :
		double input();
		void print();
		void set(float);
		double get();
		char apprecier();
};

double Note::input(){
	
	cout << "Saisir une note entre 0 et 20 : ";
	cin >> value;
	return value;
}

void Note::print(){

	cout << "La note est : " << value << endl;
}

void Note::set(float k){
	
	value=k;
}

double Note::get(){

	return value;	
}

char Note::apprecier(){
	
		if(18<value && value<=20) cout << "Excelente";
		else if (16<value && value<=18) cout << "T.B";
		else if(14<value && value<=16) cout << "B";
		else if (12<value && value<=14) cout << "A.B";
		else if (10<=value && value<=12) cout << "Passable";
		else if(0<value && value<10) cout << "Faible";
		else cout << "ERROR 404";
	}

int main(){
	
	Note a   ;	double k;  char C;  	k=a.input();  	a.print();
	a.set(9);
	k=a.get();
	cout << k << endl;
	C=a.apprecier();
	cout << C << endl;
	getch();
	return 0;
}
