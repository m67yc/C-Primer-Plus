#include <iostream>
using namespace std;
void exchage(double x);

int main(){
	cout << "Enter the number of light years: ";
	double num_LightYear;
	cin >> num_LightYear;
	exchage(num_LightYear);
	
	return 0;
}

void exchage(double x){
	cout << x << " light years " << x*63240 << " astronomical units.";
}