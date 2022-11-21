/*The switch case is the multiple-branching statement where based on a condition,the control is
transferred to one of the many possible points*/
#include<iostream>
using namespace std;
void checkCharacter(){
	char ch;
	cout<<"Enter a character.\n";
	cin>>ch;
	if(ch>='a' && ch<='z'){
	    cout<<"small letter.\n";
	}else if(ch>='A' && ch<='Z'){
		cout<<"Capital letter.\n";
	}else if(ch>='0' && ch<='9'){
		cout<<"Digit.\n";
	}else{
		cout<<"Spacial character.\n";
	}
}
void cheackPrimeNum(){
	int n,i,counter=0;
	cout<<"Enter a number:\n";
	cin>>n;
	for(i=2;i<=n/2;i++){
		if(n%i==0){
			counter++;
		}
		if(counter==0){
			cout<<"prime number.\n";
		}else{
			cout<<"Not prime number.\n";
		}
	}
}
int main(){
	char choice;
	cout<<"Choose option.\n";
	cout<<"A)Check Character.\n";
	cout<<"B)Cheack Prime number.\n";
	cout<<"C)Exist.\n";
	cin>>choice;
	switch(choice){
		case 'A':
		    checkCharacter();
		    break;
		case 'B':
			cheackPrimeNum();
			break;
		case 'C':
			return 0;
			break;
		default:
			cout<<"Choose correct option.\n";
		
	}
}
