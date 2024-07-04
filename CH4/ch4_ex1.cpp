#include<iostream>
#include<cstring>
using namespace std;

int main(){
	
	string first_name, last_name;
	char grade;
	int age;
	cout << "What is your first name?";
	cin >> first_name;
	cout << "What is your last name?";
	cin >> last_name;
	cout << "What letter grade do you deserve?";
	cin >> grade;
	cout << "What is your age?";
	cin >> age;
	grade++;
	cout << "name: " << last_name << ", " << first_name << endl;
	cout << "Grade: " << grade << endl;
	cout << "Age: " << age;
	
	return 0;
}