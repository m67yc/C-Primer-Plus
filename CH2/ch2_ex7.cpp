#include <iostream>
using namespace std;
void exchage(int x,int y);

int main(){
	cout << "Enter the number of hour: ";
	int hour;
	cin >> hour;
	cout << "Enter the number of minutes: ";
	int min;
	cin >> min;
	exchage(hour,min);
	
	return 0;
}

void exchage(int x,int y){
	cout << "Time: " << x <<":" << y;
}