//output?
#include<iostream>
using namespace std;
int fun(int n){
	while(n--)
	cout<<"Hello"<<endl;
	return 0;
}
int main(){
	int (*ptr)(int)=fun;
	(*ptr)(3);
	return 0;
}
//Hello
//Hello
//Hello
