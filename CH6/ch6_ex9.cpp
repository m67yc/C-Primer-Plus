#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct Data{
	
	string name;
	double money;
	
};

int main(){

    string information;
    int num;
    
    ifstream inFile;
    inFile.open("donor.txt");
	inFile >> num;
	cout << num << endl;
	inFile.get();
	
	Data * data= new Data[num];
    for(int i = 0;i < num;i++){
    	if(inFile.good()){
		    getline(inFile,data[i].name);
		    inFile >> data[i].money;
		    inFile.get();
		    cout << i << ": \n" << data[i].name << endl << data[i].money << endl;
	    }
    }
	
	cout << "\nGrand Patrons: \n";
	for(int i = 0,o = 0;i < num;i++){
		if(data[i].money > 10000){
			cout << data[i].name << endl;
			o++;
		}
		if(i+1 == num && o == 0){
			cout << "none";
		}
	}
	
	cout << "\nPatrons: \n";
	for(int i = 0,o = 0;i < num;i++){
		if(data[i].money <= 10000){
			cout << data[i].name << endl;
			o++;
		}
		if(i+1 == num && o == 0){
			cout << "none";
		}
	}
	
    inFile.close();
    delete data;
	return 0;
}