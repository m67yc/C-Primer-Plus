#include <iostream>
using namespace std;

int main(){
	
	int min,max,total;
	
	cout << "Enter two numbers that you want.\n";
	cout << "the min:";
	cin >> min;
	cout << "the max:";
	cin >> max;
	for(int i = min;i <= max;i++){
		total += i;
	}
	cout << total;
	
	return 0;
	
}
