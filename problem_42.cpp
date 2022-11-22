#include<iostream>
using namespace std;
int main(){
	const int a=7;
	const int *p=&a;
	cout<<*++p<<endl;
	return 0;
}
//output will be Garbage value.
