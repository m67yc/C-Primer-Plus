#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){

    int num_vowels = 0, num_consonants = 0, num = 0;
    string word;
    
    cout << "Enter words (q to quit): \n";
    
    while(cin >> word){
    	
		if(isalpha(word[0])){
			word = tolower(word[0]);
			if(word == "q"){
    	    	break;
		    }
			if(word == "a" || word == "e" || word == "i" || word == "o" || word == "u"){
    			num_vowels++;
			}
			else {
				num_consonants++;
			}
		}
		else{
		   	num++;
		}
	}
	cout << endl
	     << num_vowels << " words beginning with vowels\n"
	     << num_consonants << " words beginning with consonants\n"
	     << num << " others";
    
	return 0;
}
