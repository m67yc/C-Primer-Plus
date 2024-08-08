#include <iostream>

const int Max = 5;

double * fill_array(double ar[], int limit);
void show_array(const double ar[], double * n);  // don't change data
void revalue(double r, double ar[], double * n);

int main() {
  using namespace std;
  double properties[Max];
  double * last_value = fill_array(properties, Max);
  show_array(properties, last_value);

  if (last_value > 0) {
    cout << "Enter revaluation factor: ";
    double factor;

    while (!(cin >> factor)) {
      cin.clear();
      while (cin.get() != '\n')
        continue;
      cout << "Bad input; Please enter a number: ";
    }

    revalue(factor, properties, last_value);
    show_array(properties, last_value);
  }

  cout << "Done.\n";
  cin.get();
  cin.get();

  return 0;
}

double * fill_array(double ar[], int limit) {
  using namespace std;

  double temp;
  int i;

  for (i = 0; i < limit; i++) {
    cout << "Enter value #" << (i + 1) << ": ";
    cin >> temp;

    if (!cin) {
      cin.clear();
      while (cin.get() != '\n')
        continue;
      cout << "Bad input; input process terminated.\n";
      break;
    } else if (temp < 0)  // signal to terminate
      break;
    ar[i] = temp;
  }

  return &ar[i];
}

void show_array(const double ar[], double * n) {
  using namespace std;

  for (int i = 0; &ar[i] != n; i++) {
    cout << "Property #" << (i + 1) << ": $";
    cout << ar[i] << endl;
  }
}

void revalue(double r, double ar[], double * n) {
  for (int i = 0; &ar[i] != n; i++)
    ar[i] *= r;
}