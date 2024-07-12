#include <iostream>


int main() {

    using namespace std;

    const int strsize = 80;
    struct Bop {
        char fullname[strsize]; // real name
        char title[strsize];    // job title
        char bopname[strsize];  // secret BOP name
        int preference;         // 0 = fullname, 1 = title, 2 = bopname
    };

    const int size = 5;
    const Bop bops[size] = {
        {"Wimp Macho", "bbb", "c", 0},
        {"Raki Rhodes", "2XXXX", "3XXXXX", 1},
        {"Celia Laiter", "2AAAA", "3AAAAA", 2},
        {"Hoppy Hipman", "2BBBB", "3BBBBB", 0},
        {"Pat Hand", "4CCCC", "3CCCCC", 1}
    };

    cout << "Benevolent order of Programmers report.\n";
    cout << "a. display by name     b. display by title\n"
         << "c. display by bopname  d. display by preference\n"
         << "q. quit" << endl;
    
    char choose;
    cout << "Enter your choice: ";
    cin >> choose;
    while(choose != 'q'){
    	switch(choose){
		    case 'a' :  for(int i = 0;i < size;i++){
		    	            cout << bops[i].fullname << endl;
					    }
			            break;
			case 'b' :  for(int i = 0;i < size;i++){
		    	            cout << bops[i].title << endl;
					    }
			            break;
			case 'c' :  for(int i = 0;i < size;i++){
		    	            cout << bops[i].bopname << endl;
					    }
			            break;
			case 'd' :  for(int i = 0;i < size;i++){
		    	            if(bops[i].preference == 0){
		    	           	    cout << bops[i].fullname << endl;
						   }
						   else if(bops[i].preference == 1){
						   	    cout << bops[i].title << endl;
						   }
						   else{
						   	    cout << bops[i].bopname << endl;
						   }
					    }
			            break;
		}
		cout << "Next choice: ";
    	cin >> choose;
	}
	cout << "Bye!";
    
	return 0;
}
