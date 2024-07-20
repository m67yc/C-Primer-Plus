#include <iostream>
using namespace std;

long double probability(unsigned numbers, unsigned picks);

int main() {
  
  int num;
  cout << "Enter the times that you need to choose to get chance: \n";
  cin >> num;
  long double total_chance = 1, chance[num];
  int total[num], choices[num];
  
  cin.get();
  for(int i = 0;i < num;i++){
 	cout << "Enter the total number of choices on the game and the number of picks: \n";
 	cin >> total[i];
 	cin >> choices[i];
 	chance[i] = probability(total[i], choices[i]);
  	total_chance *= (1/chance[i]);
  }
  cout << endl << total_chance;
  
  return 0;
}

long double probability(unsigned numbers, unsigned picks) {
	
  long double result = 1.0;  // here come some local variables
  long double n;
  unsigned p;
  
  for (n = numbers, p = picks; p > 0; n--, p--)
    result = result * n / p;
    
  return result;
  
}
