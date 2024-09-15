#include <iostream>
using namespace std;
#include <cstring>

struct stringy {
  char * str;
  int ct;
};

void set(string , char*);
void show(string , int n = 0);
void show(char* , int n = 0);

int main() {
	
	string beany;
	char testing[] = "Reality isn't what it used to be.";
	
	set(beany, testing);
    show(beany);
	show(beany, 2);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);
	show("Done!");
	
	return 0;
}

void set(string str, char* ch){
	
	
	
}

void show(string str, int n){
	
	
	
}

void show(char* ch, int n){
	
	
	
}