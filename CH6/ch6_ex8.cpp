#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){

    ifstream inFile;
    string filename;
    char ch;
    
    //cout << "Enter name of data: ";
    //getline(cin, filename);
	inFile.open("abc.txt");
	
	if(!inFile.is_open()){
		cout << "Could not open the file " << endl;
	}
	
	int count = 0;
	inFile >> ch;
	while(inFile.good()){
		++count;
		inFile >> ch;
	}
    if(inFile.eof()){
    	cout << "End of file reached.\n";
	}else if(inFile.fail()){
		cout << "Input terminated by data mismatch.\n";
	}else{
		cout << "Input terminated by unknown resaon.\n";
	}
	if(cout == 0){
		cout << "No data processed.\n";
	}else{
		cout << "Items read: " << count << endl;
	}
	inFile.close();
    
	return 0;
}
