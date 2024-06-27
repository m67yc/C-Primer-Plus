#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	long double distance_mile,gasoline_quantity_gallon,gallon_per_fuel_consumption;
	
	cout << "Enter the distance in mile: ";
	cin >> distance_mile;
	cout << "Enter the gasoline quantity in gallon: ";
	cin >> gasoline_quantity_gallon;
	gallon_per_fuel_consumption = distance_mile / gasoline_quantity_gallon;
	cout << gallon_per_fuel_consumption << "gallon per fuel consumption";

	return 0;
}
