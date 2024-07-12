#include <iostream>
using namespace std;

int main() {

    int income;
    
	cout << "Enter your income: ";
    while(income >= 0 && cin >> income){
	    
		if(income >= 0 && income <= 5000){
			cout << "Taxes is 0 tvarp.\n";
		}
    	else if(income > 5000 && income <= 150000){
    		cout << "Taxes is " << income*0.10 << " tvarp.\n";
		}
		else if(income > 15000 && income <= 35000){
			cout << "Taxes is " << income*0.15 << " tvarp.\n";
		}
		else if (income > 35000){
			cout << "Taxes is "
			     << ((income-35000)*0.20 + 10000*0.10 + 20000*0.15)
			     << " tvarp.\n";
		}
		else{
			break;
		}
		
    	cout << "Enter your income: ";
	}
    
	return 0;
}
