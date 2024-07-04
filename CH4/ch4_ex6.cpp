#include<iostream>
#include<cstring>
using namespace std;

struct CandyBar{
	
	string candy_name;
	int cal;
	float weight;
	
};

int main(){
	
	CandyBar snack[3];
	snack[0] = {"Mocha Munch", 350, 2.3};
	snack[1] = {"A", 300, 3.4};
	snack[2] = {"B", 250, 4.5};
	
	for(int i=0;i<=2;i++){
		cout << "Candy's name: " << snack[i].candy_name << endl 
	         << "weight: " << snack[i].weight << endl
		     << "Calories: " << snack[i].cal << "\n\n";
	}
	
	return 0;
}
