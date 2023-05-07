#include <iostream>
#include <conio.h>

using namespace std;

class chaine {
	
	int taille;
	char *ch;
	public : 
		chaine();
		chaine(char *);
		char operator[](int);
		chaine(chaine *);
		void affiche();
		void operator=(chaine &);
		void operator==(chaine &);
		void operator+(chaine &);
		~chaine();
};

chaine::chaine(){
	cout << "Constructeur" << endl;
	ch=NULL;
}

chaine::chaine(char *c){
	
	taille=5;   c=new char[taille];
	cout << "Constructeur" << endl;
	cout << "Adresse de l objet : " << this << endl;
	cout << "Adresse de la chaine : " << ch << endl;
}

chaine::~chaine(){
	cout << "Destruction adresse de l objet : " << this << endl;
	cout << "Adresse de la chaine : " << ch <<  endl;;
	delete ch;
}

char chaine::operator[](int i){
	
	return ch[i];
}

chaine::chaine(chaine *c){
	
	taille = c->taille;   c->ch=new char[taille];
	for (int i=0;i<taille;i++)
		ch[i]=c->ch[i];
	cout << "\nConstructeur par recopie"<< endl;
	cout << "Adresse de l objet : " << this<< endl;
	cout << "Adresse de la chaine : " << ch << endl;
}

void chaine::affiche(){
	
	int i;
	cout << "Adresse : " << this << "\n";
	for(i=0;i<taille;i++){
		
		cout << *(ch+i) << " ";
	}
	cout << endl;
}

void chaine::operator==(chaine &c){
	
	if (ch==c.ch)  cout << "sont egaux" << endl;
		cout << "ne sont pas egaux" << endl;
}


void chaine::operator+(chaine &c){
	
	int i;
	for(i=0;i<taille;i++){
		
		cout << *(ch+i) << " ";
	}
	cout << "\t ";
	for(i=taille;i<taille+c.taille;i++){
		
		cout << *(c.ch+i) << " ";
	}
	
}

void chaine::operator=(chaine &c){
	
	int i; 
	taille=c.taille;
	delete ch;
	ch = new char[taille];
	for(i=0;i<taille;i++)
		ch[i]=c.ch[i];
}

int main(){
	
	char a1[]="ayoub",b1[]="etoullali";
	chaine a(a1),b(b1); 
	a.affiche();  b.affiche(); 
	b=a;
	a.affiche(); b.affiche();
	b==a;
	a.affiche(); b.affiche();
	//a=(a+b);
	a.affiche(); 
	getch();
	return 0;
}
