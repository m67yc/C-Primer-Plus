#include<iostream>
#include<cstring>
using namespace std;

struct pizza_{
	
	string name;
	int d;
	float weight;
	
};

int main(){
	
	pizza_ * pizza = new pizza_;
	
	cout << "Enter the name of company:";
	cin >> (*pizza).name;
	cout << "Enter the diameter of pizza: ";
	cin >> (*pizza).d;
	cout << "Enter the weight of pizza: ";
	cin >> (*pizza).weight;
	
	cout << "The name of company is " << (*pizza).name << endl
	     << "The diameter of pizza is " << (*pizza).d << endl
	     << "The weight of pizza is " << (*pizza).weight << endl;
	
	delete pizza;
	return 0;
}
