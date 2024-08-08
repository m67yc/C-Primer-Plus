#include <iostream>
using namespace std;

const int SLEN = 30;

struct student {
  char fullname[SLEN];
  char hobby[SLEN];
  int ooplevel;
};

int getinfo(student pa[], int n);
void display1(student st);
void display2(const student* ps);
void display3(const student pa[], int n);

int main() {
  cout << "Enter class size : ";
  int class_size;
  cin >> class_size;

  while (cin.get() != '\n')
    continue;

  student* ptr_stu = new student[class_size];
  int entered = getinfo(ptr_stu, class_size);

  for (int i = 0; i < entered; i++) {
    display1(ptr_stu[i]);
    display2(&ptr_stu[i]);
  }
  display3(ptr_stu, entered);
  delete[] ptr_stu;
  cout << "Done\n";

  return 0;
}

int getinfo(student pa[], int n){

	int num;
	for(num = 0;num < n;num++){
		cout << "Enter your fullname: ";
		cin >> pa[num].fullname;
		cout << "Enter your hobby: ";
		cin >> pa[num].hobby;
		cout << "Enter your level: ";
		cin >> pa[num].ooplevel;
		
		if(sizeof(pa[num].fullname) <= 1 || sizeof(pa[num].hobby) <= 1)
			break;
	}

	return num;
	
}

void display1(student st){
	
	cout << "The hobby and level of " << st.fullname << " are " << st.hobby << " and " << st.ooplevel << endl;
	
}

void display2(const student* ps){
	
	cout << "The hobby and level of " << ps->fullname << " are " << ps->hobby << " and " << ps->ooplevel << endl;
	
}

void display3(const student pa[], int n){
	
	
	
}