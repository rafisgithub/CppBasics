#include<iostream>
using namespace std;
int fun(int &b ,int &a){
	static int z=4;
	while(--z>0){
		fun(b,a);
		a*=2;
		b--;
	}
	return 0;
}
int main(){
	int a=5,b=7;
	cout<<fun(a,b)<<endl;
	cout<<a<<" "<<b<<endl;
	return 0;
}
