//Comment on the following:
//int* const ptr
#include <stdio.h>
using namespace std;
int main(){
	int q = 5;
	int *const ptr = &q;
	//Valid
	*ptr=7;
	const int q2 = 7;

	//Compilation error
	ptr= &q2;

	return 0;
}
//We can't change the pointer ptr itself.
