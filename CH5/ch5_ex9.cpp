#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main(){
	
	string word;
	int time;
	
	cout << "Enter words (to stop, type the word done):\n";
	cin >> word;
	while(word != "done"){
	    cin >> word;
		time++;
	}
	cout << "You entered a total of " << time << " words.";
	
	return 0;
	
}
