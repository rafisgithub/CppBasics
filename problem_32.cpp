//output?
#include<iostream>
using namespace std;
int fun(int &x,int c){
	c=c-1;
	if(c==0)
	return 1;
	x=x+1;
	return fun(x,c)*x;
}
int main(){
int p=5;
cout<<fun(p,p)<<endl;	
	return 0;
}
//6561
