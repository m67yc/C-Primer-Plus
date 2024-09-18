#include <iostream>
using namespace std;
#include <cstring>

struct stringy {
  char * str;
  int ct;
};

void set(stringy , char*);
void show(const stringy , int n = 1);
void show(char* , int n = 1);

int main() {
	
	stringy beany;
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

void set(stringy strt, char* ch){
	
	strcpy(strt.str, ch);
	for(int i = 0;ch[i] == '\0';i++)
		strt.ct = i;
	
}

void show(const stringy strt, int n){
	
	for(int i = 0;i < n;i++){
		cout << strt.str << endl;
	}
	
}

void show(char* ch, int n){
	
	for(int i = 0;i < n;i++){
		cout << ch << endl;
	}
	
}
