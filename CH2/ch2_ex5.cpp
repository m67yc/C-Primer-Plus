#include <iostream>
using namespace std;
int exchage(int x);

int main(){
	
	double celsius_valus,exchange_to_fahrenheit_valus;
	cout << "Please enter a Celsius valus: ";
	cin >> celsius_valus;
	exchange_to_fahrenheit_valus = exchage(celsius_valus);
	cout << celsius_valus << " degrees Celsius is " << exchange_to_fahrenheit_valus << " degrees Fahrenheit.";
	
	return 0;
}

int exchage(int x){
	return x*1.8+32;
}
