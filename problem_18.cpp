//What is the output of this function?
#include<iostream>
using namespace std;
void convert(int n){
	if(n<0){
		cout<<n;
	}else{
		convert(n/2);
		cout<<n%2;
	}
}
int main(){
	int n;
	cout<<"Enter a postive integer:\n";
	cin>>n;
	convert(n);
	
}
//it will not print anything and will not terminate
