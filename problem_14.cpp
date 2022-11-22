#include<iostream>
using namespace std;
int jumble(int &x,int &y){
	x=2*x+y;
	return x;
}
int main(){
	int x=2,y=5;
	y=jumble(x,y);
	x=jumble(x,y);
	cout<<x<<endl;
	return 0;
}
//output 27
