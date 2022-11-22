//Which statement is used to catch all types of exception?
#include <iostream>
using namespace std;
int main(){
	int age;
	cout<<"Enter your age\n";
	cin>>age;
	try{
		if(age<18){
			cout<<"Access denied->you must be at least 18 year old.\n";
		}else{
			throw(age);
		}
	}
//	catch(int ThrowingAge){
//		cout<<"Your are "<<ThrowingAge<<" years old So,"<<endl;
//		cout<<"Access granted->you are old enough.\n";
//	}
	catch(...){//If you do not know the throw type used in the try block, you can use the "three dots"
	            // syntax (...) inside the catch block, which will handle any type of exception:
		cout<<"I'm from catch all types of exception\n";
	}
	return 0;
}


