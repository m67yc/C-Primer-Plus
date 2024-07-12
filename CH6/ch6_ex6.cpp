#include <iostream>
#include <string>
using namespace std;

struct Data{
	
	string name;
	double money;
	
};

int main(){

    int num;
    cout << "Enter the numble of donor: ";
    cin >> num;
    Data * data= new Data[num];
    
    cout <<"Enter the data of donor(name and money): \n";
    for(int i = 0;i < num;i++){
    	cin >> data[i].name;
    	cin >> data[i].money;
	}
	
	cout << "\nGrand Patrons: \n";
	for(int i = 0,o = 0;i < num;i++){
		if(data[i].money > 10000){
			cout << data[i].name << endl;
			o++;
		}
		if(i+1 == num && o == 0){
			cout << "none";
		}
	}
	
	cout << "\nPatrons: \n";
	for(int i = 0,o = 0;i < num;i++){
		if(data[i].money <= 10000){
			cout << data[i].name << endl;
			o++;
		}
		if(i+1 == num && o == 0){
			cout << "none";
		}
	}
    
	return 0;
}
