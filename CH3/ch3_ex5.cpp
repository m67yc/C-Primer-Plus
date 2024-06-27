#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	long long population_world,population_US;
	long double percentage_global_population;
	
	cout << "Enter the world's population: ";
	cin >> population_world;
	cout << "Enter the population of the US: ";
	cin >> population_US;
	
	percentage_global_population = population_US * 100.0 / population_world;
	cout << "The population of the US is " << percentage_global_population << "% of the world population.";
	
	return 0;
}