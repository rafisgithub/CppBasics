//What is the output of this program?
#include<iostream>
using namespace std;
int main(){
	int a[]={1,2,3,4,5,6,7};
	int *p=a+2;
	int **q=&p;
	++*q;
	cout<<*(a+1)<<" "<<*p<<" "<<*(*q+1)<<endl;
}
//output 2 4 5  

