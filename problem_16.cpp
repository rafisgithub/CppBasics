//what does the following fragment of C++ program
#include<iostream>
unsigned int foo(unsigned n,unsigned r){
	if(n>0){
		return (n%2+foo(n/r,r));
	}else{
		return 0;
	}
}
using namespace std;
int main(){
	char c[]="GATE2022";
	char *p=c;
	cout<<p+p[3]-p[1]<<endl;
    cout<<foo(513,2)<<endl;
}
//output 2022

