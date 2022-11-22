//What is the output ?
#include<iostream>
using namespace std;
int main(){
	static int x=1;
	cout<<x<<" ";
	x++;
	if(x<11){
		main();
	}
	
	return 0;
}
//1 2 3 4 5 6 7 8 9 10
