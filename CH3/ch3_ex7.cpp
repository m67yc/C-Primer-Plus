#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	long double gasoline_quantity_gallon,gasoline_quantity_L,gallon_per_fuel_consumption;
	
	
	cout << "Enter the gasoline quantity that is used per 100 km in L: ";
	cin >> gasoline_quantity_L;
	gasoline_quantity_gallon = gasoline_quantity_L/3.875;
	gallon_per_fuel_consumption = 62.14 / gasoline_quantity_gallon;
	cout << gallon_per_fuel_consumption << "gallon per fuel consumption";
	

	return 0;
}