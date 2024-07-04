#include<iostream>
#include<cstring>
using namespace std;

struct CandyBar{
	
	string candy_name;
	int cal;
	float weight;
	
};

int main(){
	
	CandyBar snack{"Mocha Munch", 350, 2.3};
	cout << "Candy's name: " << snack.candy_name << endl 
	     << "weight: " << snack.weight << endl
		 << "Calories: " << snack.cal << endl;
	
	return 0;
}
