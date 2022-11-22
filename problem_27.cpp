#include<iostream>
using namespace std;
int main(){
	int ch;
	cin>>ch;
	switch(ch){
		case 'a':cout<<"a";break;
		case 'e':cout<<"e";break;
		case 'i':cout<<"i";break;
		default:cout<<"consonant ";
		case 'o':cout<<"o";
		case 'u':cout<<"u";
	}
	return 0;
}
//input a to z.
//output consonant ou because default is always true.
