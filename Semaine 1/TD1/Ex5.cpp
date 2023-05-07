#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

void test (int n=0,float x=2.5){
  	
  	
  	cout << "Fonction N°1 :  ";
  	cout << "n= "<<n<<" x="<<x<<"\n";
  	
  }
  void test(float x=4.1,int n=2){
  	
  	cout << "Fonction N°2 : ";
  	cout <<"n= "<<n<<" x="<<x<<"\n";
  	
  }
  int main()
  {
  	int i=5;float r=3.2;
  	test(i,r);
  	test(r,i);
  	test(i);
  	test(r);
  	getch();
  }
