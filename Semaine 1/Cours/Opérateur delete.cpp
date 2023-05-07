#include <iostream>


struct complexe{
	double reel,im;
};
int main(){
		complexe *z;
		z=new complexe[50];
		std::cout << "valeur de z : " << z ;
		
		delete z;
		delete []z;
		std::cout << "valeur de z apres delete : " << z ;
}
	
	
