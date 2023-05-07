#include <iostream>

int somme(int n1, int n2){
	return n1+n2;
}

int somme(int n1, int n2, int n3){
	return n1+n2+n3;
}

double somme(double n1, double n2){
	return n1+n2;
}

int main(){
	
	std::cout << "1 + 2 = " << somme(1,2) << std::endl;
	std::cout << "1 + 2 + 3 = " << somme(1,2,3) << std::endl;
	std::cout << "1.2 + 2.3 = " << somme(1.2,2.3) << std::endl;
	
}
