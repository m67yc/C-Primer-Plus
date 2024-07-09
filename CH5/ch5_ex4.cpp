#include <iostream>
using namespace std;
const int money = 100;

int main(){
	
	double cleo = money, daphne = money;
	int year_used = 0;
	
	while(cleo <= daphne){
		cleo *= 1.05;
		daphne += 10;
		year_used++;
	}
	cout << "The year that cleo used to more than daphne: " << year_used << endl
	     << "Cleo: " << cleo << endl 
	     << "Daphne: " << daphne;
	
	return 0;
	
}
