#include <iostream>
using namespace std;
void exchage(int x,int y);

int main(){
	
	int hour,min;
	cout << "Enter the number of hour: ";
	cin >> hour;
	cout << "Enter the number of minutes: ";
	cin >> min;
	exchage(hour,min);
	
	return 0;
}

void exchage(int x,int y){
	cout << "Time: " << x <<":" << y;
}
