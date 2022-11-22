#include<Iostream>
using namespace std;
typedef struct A{
	char      a;
	short int b;
	double    c;
	char       d;
} oA;
int main(){
	cout<<sizeof(oA)<<endl;
}
//output 24
