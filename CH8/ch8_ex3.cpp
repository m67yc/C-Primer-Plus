#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void toupper(string );

int main(){
	
	string str;
	
	cout << "Enter a string(q to quit): ";
	getline(cin, str);
	while(str != "q"){
		toupper(str);
		
		cout << "Next string(q to quit): ";
		getline(cin, str);
	}
	
	return 0;
	
}

void toupper(string ch){
	
	for(int i = 0;i < sizeof(ch);i++){
		if(!isgraph(ch[i]))
			break;
		if(islower(ch[i]))
			ch[i] -= 32;
		cout << ch[i];
	}
	cout << endl;
	
}