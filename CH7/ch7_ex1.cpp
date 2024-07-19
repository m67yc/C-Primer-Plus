#include<iostream>
using namespace std;
float aveg(int,int);

int main(){
	
	int time = 0;
	int * x = new int;
	int * y = new int;
	double * ave = new double;
	
	cin >> x[0];
	cin >> y[0];
	while(x[time] != 0 || y[time] != 0){
		ave[time] = aveg(x[time],y[time]);
		time++;
		cin >> x[time];
		cin >> y[time];
	}
	for(int u = 0;u < time;u++){
		cout << x[u] << " & " << y[u] << ": " << ave[u] << endl;
	}
	
	return 0;
}

float aveg(int i,int o){
	return 2.0*i*o/(i+o);
}
