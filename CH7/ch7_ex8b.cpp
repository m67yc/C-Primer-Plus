#include <iostream>
#include <string>
using namespace std;

const int Seasons = 4;

const char * Snames[Seasons] = {"Spring", "Summer", "Fall", "Winter"};

struct Value {
	
	double expenses[Seasons];
	
};
void fill(double * pa, int Seasons);
void show(double da[], int Seasons);

int main() {
  
  Value value;
  fill(value.expenses, Seasons);
  show(value.expenses, Seasons);
  return 0;
}

void fill(double * pa, int Seasons) {
  using namespace std;
  
  for (int i = 0; i < Seasons; i++) {
    cout << "Enter " << Snames[i] << " expenses: ";
    cin >> pa[i];
  }
}

void show(double da[], int Seasons) {
  using namespace std;
  
  double total = 0.0;
  cout << "\nEXPENSES\n";
  
  for (int i = 0; i < Seasons; i++) {
    cout << Snames[i] << ": $" << da[i] << endl;
    total += da[i];
  }
  
  cout << "Total Expenses: $" << total << endl;
}