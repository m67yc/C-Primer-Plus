#include <iostream>
using namespace std;
const int exchange_sec_to_min = 60;
const int exchange_min_to_hour = 60;
const int exchange_hour_to_day = 24;

int main(){
	
	long long sec;
	int sec_leftover,min_from_sec,hour_from_min,day_from_hour;
	cout << "Enter the number of seconds: ";
	cin >> sec;
	
	min_from_sec = sec/exchange_sec_to_min;
	sec_leftover = sec%exchange_sec_to_min;
	hour_from_min = min_from_sec/exchange_min_to_hour;
	min_from_sec = min_from_sec%exchange_min_to_hour;
	day_from_hour = hour_from_min/exchange_hour_to_day;
	hour_from_min = hour_from_min%exchange_hour_to_day;
	
	cout << sec << " seconds = " << day_from_hour << " days, " << hour_from_min << " hours, " << min_from_sec << " minutes, " << sec_leftover << " seconds.";
	
	return 0;
}