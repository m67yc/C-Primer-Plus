#include<iostream>
#include<cstring>
using namespace std;

int main(){
	
	const int ArSize = 30;
	char first_name[ArSize];
	char last_name[ArSize];
	
	cout << "Enter your first name: ";
	cin.getline(first_name,ArSize);
	cout << "Enter your last name: ";
	cin.getline(last_name,ArSize);
	cout << "Here's the information in a single string: " << last_name << ", " << first_name;
	
	return 0;
}
