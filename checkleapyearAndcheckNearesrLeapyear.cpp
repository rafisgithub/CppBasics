#include<iostream>
using namespace std;
int leapYear1(int year){
	int nearestLeapYear;
	if(year%400==0 || (year%100!=0 && year%4==0)){
		return year;
	}
	nearestLeapYear=year-1;
	leapYear1(nearestLeapYear);
}
int leapYear2(int year){
	int nearestLeapYear;
	if(year%400==0 || (year%100!=0 && year%4==0)){
		return year;
	}
	nearestLeapYear=year+1;
	leapYear1(nearestLeapYear);
}
int main(){
	int year;
	int q;
	int w;
	int dis1;
	int dis2;
	cout<<"Enter a year:\n";
	cin>>year;
	if(year%400==0 || (year%100!=0 && year%4==0)){
		cout<<"Leap year.\n";
	}else{
		q=leapYear1(year);
		w=leapYear2(year);
		dis1=year-q;
		dis2=w-year;
		if(dis1<dis2){
			cout<<year<<" is not a leap year.\n";
			cout<<"Nearest leep is :"<<q<<endl;
		}else{
			cout<<year<<" is not a leap year.\n";
			cout<<"Nearest leep is :"<<w<<endl;
		}
		
	}
	return 0;
}
