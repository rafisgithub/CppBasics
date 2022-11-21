//Relational expression produce reuslts of type bool which takes a value true or false.
#include<iostream>
using namespace std;
int main(){
	int x=1,y=2;
	if(--x==0 && ++y==3){//both condition should be true.
		if(x++==0 && y--==3){
			cout<<"True.\n";
			cout<<x<<" "<<y<<endl;
		}
	}else{
		cout<<"False.\n";
	}
	return 0;
}
/*Both arguments to "==", "!=", "<",
">", ">=", and "<=" must be
numeric (integers, floats, or expressions returning integers or
floats).  The arguments to "&&" and "||" may be
numeric or boolean.*/
