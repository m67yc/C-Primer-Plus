#include<iostream>
#include<cstring>
using namespace std;

int main(){
	
	int ArSize = 100;
	char first_name[ArSize], last_name[ArSize];
	char grade;
	int age;
	cout << "What is your first name?";
	cin.getline(first_name,ArSize);
	cout << "What is your last name?";
	cin.getline(last_name,ArSize);
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
