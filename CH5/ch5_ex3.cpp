#include <iostream>
using namespace std;

int main(){
	
	int num;
	int display;
	while(num != 0){
	    cout<<"Enter a number: ";
	    cin>>num;
	    display += num;	
	}
	cout << display;
	
	return 0;
	
}
