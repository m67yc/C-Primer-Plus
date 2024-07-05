#include<iostream>
#include<array>
using namespace std;

int main(){
	
	array<int, 3> score;
	double ave;
	
	cout << "Enter three times for the 40-meter dash\n";
	cin >> score[1];
	cin >> score[2];
	cin >> score[3];
	ave = (score[1] + score[2] + score[3]) / 3;
	
	cout << "1: " << score[1] << endl
	     << "2: " << score[2] << endl
	     << "3: " << score[3] << endl
	     << "ave: " << ave << endl;
	
	return 0;
}
