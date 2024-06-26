#include <iostream>
#include <cmath>
using namespace std;
const int exchange_foot_to_inch = 12;
const double exchange_weight = 2.2;
const double exchange_inch_to_m = 0.0254;

int main(){
	
	int height_inch,height_foot,weight_pound;
	double weight_kg,height_m,BMI;
	cout << "Enter your height in foot and inch:________\b\b\b\b\b\b\b\b";
	cin >> height_foot;
	cin >> height_inch;
	cout << "Enter your weight in pound:________\b\b\b\b\b\b\b\b";
	cin >> weight_pound;
	weight_kg = weight_pound/exchange_weight;
	height_m = (height_foot*exchange_foot_to_inch + height_inch)*exchange_inch_to_m;
	BMI = weight_kg/pow(height_m,2);
	cout << "BMI = " << BMI;
	
	
	return 0;
}
