#include <iostream>
using namespace std;
int main(){
	
	int time;
	
	cout << "Enter number of row: ";
	cin >> time;
	for(int i = 1;i <= time;i++){
		for(int o = (time-i);o != 0;o--){
			cout << ".";
		}
		for(int p = i;p != 0;p--){
			cout << "*";
		}
		cout << endl;
	}
	
	return 0;
	
}
