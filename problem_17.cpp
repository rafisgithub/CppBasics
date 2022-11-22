//what is the output os this program
#include<iostream>
using namespace std;
int main(){
	int a[]={1,2,3,4,5,6,7};
	int *p[]={a+1,a+3,a,a+5,a+4};
	int **q=p;
	cout<<*a<<" "<<**p<<" "<<**q<<endl;
	++**++*q;
	cout<<*a<<" "<<**p<<" "<<**q<<endl;
	++++*p;
	++*+++q;
	cout<<*a<<" "<<**p<<" "<<**q<<endl;
	return 0;
}
