#include <iostream>
#include <cstring>
using namespace std;
int main(){
	
	char word[20];
	int time;
	
	cout << "Enter words (to stop, type the word done):\n";
	cin >> word;
	while(strcmp(word, "done") != 0){
	    cin >> word;
		time++;
	}
	cout << "You entered a total of " << time << " words.";
	
	return 0;
	
}
