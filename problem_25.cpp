//output?
#include<iostream>
using namespace std;
void fun(int *p){
	int q=10;
	p=&q;
}
int main(){
	int r=20;
	int *p=&r;
	fun(p);
	cout<<*p<<endl;
	return 0;
}
//ouput 20
