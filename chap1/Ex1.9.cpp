#include <iostream>
int main(){
	
	int start = 50;
	int sum = 0;
	while(start < 101){
		sum += start;
		start++;
	}
	std::cout << "Answer is " << sum << "." << std::endl;
	return 0;
}