#include <iostream>
#include <string>
using namespace std;

struct Candybar{
	string name;
	double weight;
	int calories;
};

void set(Candybar &, char * name = "Millennium Munch", double weight = 2.85, int calories = 350);
void show(const Candybar &);

int main(){
	
	Candybar candybar;
	set(candybar);
	show(candybar);
	
	return 0;
	
}

void set(Candybar & CB, char * name, double weight, int calories){
	
	CB.name = name;
	CB.weight = weight;
	CB.calories = calories;
	
}

void show(const Candybar & CB){

	cout << "name: " << CB.name << endl
	     << "weight: " << CB.weight << endl
	     << "calories: " << CB.calories;

}