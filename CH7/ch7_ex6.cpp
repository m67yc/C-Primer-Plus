#include <iostream>
using namespace std;


int Fill_array(double[], int);
void Show_array(double[], int);
void Reverse_array(double[], int);

int main(){
	
	const int max = 10;
	double arr[max] = {0};
	int t;
	
	int memory = Fill_array(arr, max);
	Show_array(arr, memory);
	
	Reverse_array(arr, memory);
	Show_array(arr, memory);
	
	Reverse_array(arr, memory);
	Show_array(arr, memory);
	
	return 0;
}

int Fill_array(double num[], int time){
	
	int i = 0;

	cout << "Enter a number: ";
	while(i < time){
		if(cin >> num[i])
			cout << "Enter a number: ";
		else
			break;
		i++;
	}
	
	return i;
}

void Show_array(double num[], int time){
	
	cout << "\nThe numbers that you entered: \n";
	for(int i = 0;i < time;i++)
		cout << i+1 << ": " << num[i] << endl;
	
}

void Reverse_array(double num[], int time){
	
	int n, m;
	
	cout << "\nEnter the scope that you want to reverses(min to max): \n";
	cin >> n;
	cin >> m;
	while((m-n)%2 != 1){
		cout << "\nEnter the scope that you want to reverses(min to max): \n";
		cin >> n;
		cin >> m;
	}
	
	while(n <= m){
		num[m] = num[m] - num[n];
		num[n] += num[m];
		num[m] = num[n] - num[m];
		n++;
		m--;
	}
	
}
