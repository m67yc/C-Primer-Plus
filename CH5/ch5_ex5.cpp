#include <iostream>
using namespace std;

int main(){
	
	int num_sold[12] = {0};
	int total;
	char*year[12] ={"January","February","March","April","May","June","July","August","September","October","November","December"};
	
	for(int i = 0;i < 12;i++){
		cout << "Enter the number that C++ For Fools?sold in " << year[i] << ": ";
		cin >> num_sold[i];
	}
	for(int i = 0;i < 12;i++){
		cout << "The number that C++ For Fools sold in " << year[i]
		     << ": "<< num_sold[i] << endl;
		total += num_sold[i];
	}
	cout << "The total: " << total;
	
	return 0;
	
}
