#include <iostream>
using namespace std;
const double exchange_sec_to_min = 60;
const double exchange_min_to_degrees = 60;

int main(){
	
	int degrees,min,sec;
	long double min_from_sec,degrees_from_min;
	
	cout << "Enter a latitude in degrees, minutes, and seconds: \n";
	cout << "First, enter the degrees: ";
	cin >> degrees;
	cout << "Next, enter the minutes of arc: ";
	cin >> min;
	cout << "Finally, enter the second of arc: ";
	cin >> sec;
	min_from_sec = sec/exchange_sec_to_min + min;
	degrees_from_min = min_from_sec/exchange_min_to_degrees + degrees;
	cout << degrees << " degrees, " << min << " minutes, " << sec << " seconds = " << degrees_from_min << " degrees";
	
	return 0;
}