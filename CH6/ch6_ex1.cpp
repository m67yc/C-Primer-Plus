#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main(){
	
	char word;
	string words;
	
	while(word != '@'){
		cin.get(word);
		if(isdigit(word) == 0){
	   	   	if(islower(word)){
	         	words += toupper(word);
	   	 	}
	   		else{
	   		   	words += tolower(word);
		   	}
		}
	}
	cout << words;

	return 0;
	
}
