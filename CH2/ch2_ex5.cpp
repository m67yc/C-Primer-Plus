#include <iostream>
using namespace std;
int exchage(int x);

int main(){
	cout << "Please enter a Celsius valus: ";
	double celsius_valus;
	cin >> celsius_valus;
	double exchange_to_fahrenheit_valus = exchage(celsius_valus);
	cout << celsius_valus << " degrees Celsius is " << exchange_to_fahrenheit_valus << " degrees Fahrenheit.";
	
	return 0;
}

int exchage(int x){
	return x*1.8+32;
}
