#include <iostream>
#include <conio.h>

using namespace std;

class coordonne{
	
	public :
		int x,y;
	public :
		coordonne(int a=0,int b=0){
			
			x=a;  y=b;
		}
		
		void deplace(int a,int b){
			x+=a;  y+=b;
		}
		
		void affiche(){
			
			cout << "x = " << x << " y = " << y << endl;
		}
};


/*------------------------------------------------------------*/


class forme{
	
	protected :
		short couleur;
	public :
		forme(short);
		forme(forme &);
		void affiche();
		forme operator=(forme &);
};

forme::forme(short i=0){
	
	couleur=i;
}

forme::forme(forme &x){
		
	couleur=x.couleur;
}
	
void forme::affiche(){
	
	cout << "couleur = " << couleur << endl; 
}	

forme forme::operator=(forme &x){
	
	forme a;
	a.couleur=x.couleur;
	return 	a;
}


/*------------------------------------------------------------*/


class cercle : public forme {
	
	protected :
		coordonne centre;
		short rayon;
	public :
		cercle(int,int,short,short);
		cercle(cercle &);
		cercle operator=(cercle &);
		void affiche();
		void deplace(int,int);
		int surface;
		int perimetre;
};

cercle::cercle(int x,int y,short c,short r):forme(c){
	
	centre=coordonne(x,y);
	rayon=r;
}

cercle::cercle(cercle &c):coordonne(c.centre.x,c.centre.y),forme(couleur){
	
	coordonne(c.centre.x,c.centre.y);
	forme(c.couleur); 
	rayon=c.rayon;
}

cercle cercle::operator=(cercle &c){
	
	centre=coordonne(c.centre.x,c.centre.y);
	rayon=c.rayon;
}

void cercle::affiche(){
	
	//coordonne::affiche();
	cout << "x = " << centre.x << " y = " << centre.y << endl;
	forme::affiche();
}

void cercle::deplace(int x,int y){
	
	coordonne q;
	q=coordonne(this->centre.x,this->centre.y);
	q.deplace(x,y);
	centre=q;
}


/*------------------------------------------------------------*/



class triangle : public forme{
	
	protected :
		coordonne a,b,c;
	public :
		triangle(int,int,int,int,int,int,short);
		triangle(triangle &);
		triangle operator=(triangle &);
		void affiche();
		void deplace(int,int);
		int surface;
		int perimetre;
};

triangle::triangle(int x1,int y1,int x2,int y2,int x3,int y3,short col):forme(col){
	
	a=coordonne(x1,y1);
	b=coordonne(x2,y2);
	c=coordonne(x3,y3);
	couleur=col;
}

triangle::triangle(triangle &t):forme(couleur){
	
	a=t.a;
	b=t.b;
	c=t.c;
	couleur=t.couleur;
}

triangle triangle:: operator=(triangle &t){
	
	triangle res(0,0,0,0,0,0,0);
	res.a=t.a;
	res.b=t.b;
	res.c=t.c;
	res.couleur=t.couleur;
	return res;
}

void triangle::affiche(){
	
	a.affiche();  
	b.affiche();
	c.affiche();
	forme::affiche();	
}

void triangle::deplace(int r,int p){
	
	a.deplace(r,p);
}


/*------------------------------------------------------------*/


class rectangle : public forme{
	
	protected : 
		coordonne a,b;
	public :
		rectangle(int,int,int,int,int,short);
		rectangle(rectangle &);
		rectangle operator=(rectangle &);
		void affiche();
		void deplace(int,int);
		int surface;
		int perimetre;
};

rectangle::rectangle(int x1,int y1,int x2,int y2,int z,short c):forme(c){
	
	a=coordonne(x1,y1);
	b=coordonne(x2,y2);
}

rectangle::rectangle(rectangle &r){
	
	a=coordonne(r.a.x,r.a.y);
	b=coordonne(r.b.x,r.b.y);
	couleur=r.couleur;
}
					
rectangle rectangle::operator=(rectangle &r){
	
	rectangle res(0,0,0,0,0,0);
	res.a=coordonne(r.a.x,r.a.y);
	res.b=coordonne(r.b.x,r.b.y);
	res.couleur=r.couleur;
	return res;
}

void  rectangle::affiche(){
	
	a.affiche();
	b.affiche();
	forme::affiche();
}

void rectangle::deplace(int r,int s){
	
	a.deplace(r,s);
	b.deplace(r,s);

}

/*------------------------------------------------------------*/


class carre : public rectangle{
	
	protected : 
		short cote;
	public :
		carre(int,int,int,short);
		carre(carre &);
		carre operator=(carre &);
		void affiche();
		void deplace(int,int);
		int surface;
		int perimetre;
};

carre::carre(int x,int y,int col,short ct):rectangle(x,y,30,40,ct,col){
	
	coordonne(x,y);
	cote=ct;
}

carre::carre(carre &c):rectangle(10,20,30,40,50,60){
	
	a=coordonne(c.a.x,c.a.y);
	cote=c.cote;
	couleur=c.couleur;
}

carre carre::operator=(carre &c){
	
	carre q(0,0,0,0);
	q.a=coordonne(c.a.x,c.a.y);
	q.cote=c.cote;
	q.couleur=c.couleur;
	return q;
}

void carre::affiche(){
	
	this->a.affiche();
	forme::affiche();
	cout << "cote : " << cote << endl;
}

void carre::deplace(int x,int y){
	
	this->a.deplace(x,y);
}

/*------------------------------------------------------------*/


int main(){
	
	cout << "\n----cercle----\n"; 
	cercle cl(10,20,5,12);
	cl.affiche();
	cl.deplace(5,4);
	cl.affiche();
	getch();

	cout << "\n---triangle---\n"; 
	triangle t(10,20,30,40,50,50,11);	
	t.affiche();
	t.deplace(5,4);
	t.affiche();
	getch();
	
	cout << "\n----cercle----\n";
	rectangle r(10,20,30,40,50,60);
	r.affiche();
	r.deplace(5,4);
	r.affiche();
	getch();
	
	cout << "\n----carre----\n";
	carre c(10,20,5,10);
	c.affiche();
	c.deplace(5,4);
	c.affiche();
	getch();
	
	return 0;
}
