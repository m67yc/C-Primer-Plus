#include<iostream>
using namespace std;

void argument(int);

int main(){
	
	int num;
	
	cout << "Enter a number that you want to know its argument.\n";
	while(cin >> num){
		argument(num);
	}
	
	return 0;
}

void argument(int i){
	
	cout << i << ": ";
	
	int total = 1;
	
	if(i == 0)
		i=1;
	
	while(i > 0){
		total *= i;
		i--;
	}
		
	cout << total << endl;
	
}