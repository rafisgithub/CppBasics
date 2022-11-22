//What is the output?
#include<iostream>
using namespace std;
int fun(int n){
		if(n==0 || n==1) return 1;
		else return fun(n-1)+fun(n-2);
	}
int main(){
	static int n;
	cin>>n;
	cout<<fun(n)<<endl;
	return 0;
}
