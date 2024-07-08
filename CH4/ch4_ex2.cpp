#include <iostream>
#include <cstring>
using namespace std;

int main(){
    
    string name, dessert;

    cout << "Enter your name:\n";
    cin.getline(name,100);
    cout << "Enter your favorite dessert:\n";
    cin.getline(dessert,100);
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
    
    return 0;
}
