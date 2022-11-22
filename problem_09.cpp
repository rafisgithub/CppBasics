//Comment on the following 
//const int* const ptr
#include <iostream>
using namespace std;
int main(){
	const int q = 5;
	//Valid
	const int* const ptr = &q;
	//Compilation error
	*ptr = 7;
	const int q2 = 7;
	//Compilation error
	ptr= &q2;
	
	return 0;
}
//Both of the above
