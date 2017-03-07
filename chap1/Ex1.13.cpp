
#include <iostream>

int main(){
	//Rewrite 1.9
	int sum1 = 0;
	for(int i = 50; i <=100; i++){
		sum1+=i;
	}
	std::cout << "sum from 50 to 100 is " << sum1 << std::endl;
	for(int i = 10; i >= 0; i--){
		std:: cout << i << std::endl;
	}
	int v1, v2;
	std::cout << "Please input 2 numbers" << std::endl;
	std::cin >> v1 >> v2;
	if(v1 < v2){
		int v3 = v1;
		v1 = v2;
		v2 = v3;
	}
	for(int i = v1 -1 ; i > v2; i --){
		std::cout<< i <<std::endl;
	}
	return 0;
}