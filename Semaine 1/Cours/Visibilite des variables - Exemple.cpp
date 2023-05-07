#include <iostream>

int i=11;
int main(){
	
	int i=34;
	{
	int i=23;
	::i=::i + 1;
	std::cout << ::i <<" " << i <<std::endl; 
	}
	std::cout << ::i <<" " << i <<std::endl;
	
	return 1;
}
