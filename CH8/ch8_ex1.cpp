#include <iostream>

using namespace std;

void function(const char * st, int n = 0);

int main(){
	
	char str[10] = "zjshao";
	function(str);
	function(str,1);
	
	return 0;
	
}

void function(const char * st, int n){
	
	static int i = 0;
	i++;
	
	if(n == 0)
		cout << st << endl;
	else
		cout << i;
	
	
}