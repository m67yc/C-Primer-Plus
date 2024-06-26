#include <iostream>
using namespace std;
void exchage(int x);

int main(){
	cout << "Please enter a Celsius valus: ";
	int celsius_valus;
	cin >> celsius_valus;
	exchage(celsius_valus);
	
	return 0;
}

void exchage(int x){
	cout << x << "degrees Celsius is " << x*1.8+32 << " degrees Fahrenheit.";
}