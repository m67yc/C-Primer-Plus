#include <iostream>
using namespace std;

double calculate(double x, double y,double (*ps)(double , double ));
double add(double, double);
double subtrahend(double, double);
double multiplier(double, double);
double divisor(double, double);

int main(){
	
	double num[2];
	cout << "Enter two number: ";
	while(cin >> num[0] >> num[1]){
		cout << "Add: " << calculate(num[0], num[1], add) << endl;
		cout << "subtrahend: " << calculate(num[0], num[1], subtrahend) << endl;
		cout << "multiplier: " << calculate(num[0], num[1], multiplier) << endl;
		cout << "divisor: " << calculate(num[0], num[1], divisor) << endl;
		cout << "\nAnother: \n";
	}	
	return 0;
} 

double calculate(double x, double y,double (*ps)(double , double )){
	return (*ps)(x, y);
}

double add(double x, double y){
	return x+y;
}

double subtrahend(double x, double y){
	return x-y;
}

double multiplier(double x, double y){
	return x*y;
}

double divisor(double x, double y){
	return x/y;
}
