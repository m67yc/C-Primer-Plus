#include <iostream>
#include <cstring>
using namespace std;

struct car{
	
	string make;
	int year;
	
};

int main(){
	
	int num_car;
	
	cout << "How many cars do you wish to catalog? ";
	cin >> num_car;
	cin.get();
	
	car * cars = new car[num_car];
	for(int i = 0;i < num_car;i++){
		cout << "Car #" << i+1 << ":\n"
		     << "Please enter the made: ";  
	    getline(cin, cars[i].make);
	    cout << "Please enter the year made: ";
	    cin >> cars[i].year;
	}
	cout << "Here is your collection:\n";
	for(int i = 0;i < num_car;i++){
		cout << cars[i].year << " " << cars[i].make << endl;
	}
	
	return 0;
	
}
