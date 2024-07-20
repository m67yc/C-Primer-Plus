#include<iostream>
using namespace std;

const int num = 3;

struct box{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

void input(box* , int);
void volume(box* , int);

int main(){
	
	box value[3] = {{"KM", 180, 41, 10, 0},{"JM", 175, 36, 9, 0},{"LM", 177, 48, 8, 0}};
	
	input(value, num);
	
	return 0;
}

void input (box in[], int number){
	for(int i =0;i < number;i++){
		cout << i << ": \n" 
		     << in[i].maker << endl
			 << in[i].height << endl
			 << in[i].width << endl
			 << in[i].length << endl;
		volume(in, i);
	}
}

void volume(box in2[], int i){
		in2[i].volume = in2[i].height * in2[i].width * in2[i].length;
		cout << in2[i].volume << "\n\n";
}
