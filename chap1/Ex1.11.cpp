#include <iostream>
int main(){
	using namespace std;
	int v1, v2;
	cout << "Please input 2 numbers" << endl;
	cin >> v1 >> v2;
	if(v1 < v2){
		int v3 = v1;
		v1 = v2;
		v2 = v3;
	}
	while(v1 -1 > v2){
		v1 --;
		cout << v1 <<endl;

	}
	return 0;
}