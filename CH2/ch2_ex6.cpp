#include <iostream>
using namespace std;
int exchage(double x);

int main(){
	cout << "Enter the number of light years: ";
	double num_LightYear;
	cin >> num_LightYear;
	double exchange_to_astronomical_units = exchage(num_LightYear);
	cout << num_LightYear << " light years " << exchange_to_astronomical_units << " astronomical units.";
	
	return 0;
}

int exchage(double x){
	return x*63240;
}