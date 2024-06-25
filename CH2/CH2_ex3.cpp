#include <iostream>
using namespace std;
void m();
void n();

int main(){
	
	m();
	m();
	n();
	n();
	
	return 0;
}

void m(){
	cout << "Three blind mice" << endl;
}
void n(){
	cout << "See how they run" << endl;
}