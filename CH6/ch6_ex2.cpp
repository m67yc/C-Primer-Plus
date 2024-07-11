#include <iostream>
#include <cctype>
using namespace std;

int main(){
	
	double donation[10] = {0};
	double ave = 0;
	int num = 0;
	
	
	for(int i = 0;i < 10 && cin >> donation[i];i++){
		ave += donation[i];
		num++;
	}
	
	ave = ave/num;
	for(int i =0;i < num;i++){
		if(donation[i] > ave){
			cout << donation[i];
		}
	}
	

	return 0;
	
}
