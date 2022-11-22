//Delete objectName is the syntax to delelte a single object?
#include<iostream>
using namespace std;
class Pen{
	public:
		Pen(){
			cout<<"Constructor.\n";
		}
		~Pen(){
			cout<<"Destructor.\n";
		}
		void write(){
			cout<<"Writing...!\n";
		}
};
int main(){
	//create an array of objects
   Pen* pen = new Pen[3];

   pen[0].write();
   pen[1].write();
   pen[2].write();
   
   delete [] pen;//de-allocate array of objects
	return 0;
}

