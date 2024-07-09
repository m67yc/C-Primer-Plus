#include <iostream>
using namespace std;

int main(){
	
	int num_sold[3][12] = {0};
	int total;
	char *year[12] ={"January","February","March","April","May","June","July","August","September","October","November","December"};
	
	for(int i = 0;i < 3;i++){
		for(int o = 0;o < 12;o++){
			cout << "Enter the number that C++ For Fools sold in " << year[o] << " in " << i+1 << " year: ";
			cin >> num_sold[i][o];
		}
	}
	for(int i = 0;i < 3;i++){
		for(int o = 0;o < 12;o++){
			cout << "The number that C++ For Fools sold in " << year[o]
		         << "in " << i+1 << " year: " << num_sold[i][o] << endl;
		    total += num_sold[i][o];
		}
	}
	cout << "The total: " << total;
	
	return 0;
	
}
