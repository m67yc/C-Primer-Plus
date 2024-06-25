#include <iostream>
using namespace std;
void exchange(int x);

int main(){
	
	cout << "Enter the distance in long: ";
	int distance_long;
	cin >> distance_long;
	exchange(distance_long);
		
	return 0;
}

void exchange(int x){
	cout << 220 * x;
}