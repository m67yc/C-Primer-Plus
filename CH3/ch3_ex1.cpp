#include <iostream>
using namespace std;
const int exchange = 12;
int main(){
	
	int hight_inch,hight;
	cout << "Enter your hight in inch:________\b\b\b\b\b\b\b\b";
	cin >> hight_inch;
	hight = hight_inch/exchange;
	hight_inch = hight_inch%exchange;
	cout << hight << "foot and " << hight_inch << "inch.";
	
	
	return 0;
}
