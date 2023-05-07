#include <iostream>

int main(){
	int *pi;
	pi = new int;
	std::cout << "valeur de pi : " << *pi;
	
	// ______________________
	
	int *ptr1, *ptr2, *ptr3;
	ptr1=new int;
	ptr2=new int [10];
	ptr3=new int [10];
	struct date{
		int jour, mois, an;
	};
	date *ptr4, *ptr5, *ptr6, d={25,4,1952};
	ptr4 = new date;
	ptr5 = new date[10];
	ptr6 = new date(d);
	
	std::cout << " \n mois : " << d.mois;
	
	
	
    	
}
