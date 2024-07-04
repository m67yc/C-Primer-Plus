#include<iostream>
#include<cstring>
#include <string>
using namespace std;

int main(){
	
	string first_name, last_name, full_name;
	
	cout << "Enter your first name: ";
	cin >> first_name;
	cout << "Enter your last name: ";
	cin >> last_name;
	
	full_name = last_name+", "+first_name; 
	cout << "Here's the information in a single string: " << full_name;
	
	return 0;
}
