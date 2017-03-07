//Ex 1.8
#include <iostream>
int main(){
	// std::cout << "/*"; 
	//Legal
	// std::cout << "*/"; 
	//Legal
	//std::cout << /* "*/" */;
	// Illegal, because it is 
	//std::cout << /* "*/" /* "/*" */;
	// Legal  The first quotation and the last are commented out
	return 0;
}