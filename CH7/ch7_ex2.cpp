#include<iostream>
using namespace std;

int input(int *, int);
void output(int *, int);
void aveg(int *, int);

int main(){
	
	const int max = 10;
	int score[max] = {0};
	int time;

	time = input(score, max);
	output(score, time);
	aveg(score, time);
	
	return 0;
}

int input(int result[], int x){
	int i = 0;
	while(cin >> result[i]){
		if(i < x){
			i++;
		}
	}
	return i;
}

void output(int result[], int times){
	for(int i = 0;i < times;i++){
		if(i+1 == times){
			cout << result[i] << ": ";
		}
		else{
			cout << result[i] << " & ";
		}
	}
}

void aveg(int result[], int times){
	double sum = 0;
	for(int i = 0;i < times;i++){
		sum += result[i];
	}
	cout << sum/times;
}
