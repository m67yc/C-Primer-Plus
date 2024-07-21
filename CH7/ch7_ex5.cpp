#include<iostream>
using namespace std;

long argument(int);

int main(){
	
	int num;
	long ans;
	
	cout << "Enter a number that you want to know its argument: ";
	
	while(cin >> num){
		ans = argument(num);
		cout << num << "! = " << ans << endl;
		cout << "Enter a number that you want to know its argument: ";
	}
	
	return 0;
}

long argument(int i){
	
	if(i == 0)
		return 1;
	
	return i*argument(i-1);
	
}
