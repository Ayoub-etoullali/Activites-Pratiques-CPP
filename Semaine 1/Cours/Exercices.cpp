#include <iostream>

struct complexe
{	double reel,im; };

void affiche(int);  void affiche(double);  void affiche(complexe);
int main(){
	int a = 5; 	double d =0.0; complexe c={1.0,1.0};
	affiche(a); affiche(d); affiche(c);
}
void affiche(int i){
	std::cout << "type de variable (int) : " << std::endl;
	std::cout << "valeur : " << i << std::endl;
}
void affiche(double d ) {
	std::cout << "type de variable (double) : " << std::endl;
	std::cout << "valeur : " << d << std::endl;
}
void affiche(complexe o){
	std::cout << "type de variable (complexe) : " << std::endl;
	std::cout << "valeur : " << o.reel << std::endl;
	std::cout << "valeur : " << o.im << std::endl;
}
