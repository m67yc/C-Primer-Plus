#include <iostream>
#include <cctype>
using namespace std;

int main(){
	
	char choose;
	
	cout << "Please enter one of the following choices:\n"
	     << "c) carnivore\n" << "p) pianist\n"
		 << "t) tree\n" <<  "g) game\n";
	
	cin >> choose;
	while(choose != 't'){
		switch(choose){
			case 'c' : cout << "A maple is a carnivore.";
			           break;
			case 'p' : cout << "A maple is a pianist.";
			           break;
			case 'g' : cout << "A maple is a game.";
			           break;
			default : cout << "Please enter a c, p, t, or g: ";
		}
		cin >> choose;
	}
	cout << "A maple is a tree.";

	return 0;
	
}
