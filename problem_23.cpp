//what is the output?
#include<iostream>
using namespace std;
void fun(int *p,int *q){
	p=q;
	*p%=7;
	*q*=2;
}
int main(){
	int a=10,b=20;
	fun(&a,&b);
	cout<<a<<" "<<b<<endl;
	return 0;
}
