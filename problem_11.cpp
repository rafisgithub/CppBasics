//What is the output?
#include<iostream>
using namespace std;
int main(){
	int a=5,b=3,c=1;
	int result=c-- && ++b && a--;
	cout<<a<<b<<c<<endl;//4 4 0
	int r=c-- && ++b && a--;
	cout<<a<<b<<c<<endl;//4 4 -1 a and b not change because c is fales.
	return 0;
}
