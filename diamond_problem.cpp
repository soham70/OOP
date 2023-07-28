#include<iostream>
using namespace std;

/*
Diamond Problem:The diamond problem The diamond problem occurs when two superclasses
 of a class have a common base class.
For example, in the following diagram, the TA class gets two copies
 of all attributes of Person class, this causes ambiguities. 
#GFG Diagram
*/

/*

~Before using virtual keyword:
	[Error] request for member 'showA' is ambiguous

~After using virtual keyword:
Compiled successfully!!

*/


class A{
	public:
		void showA(){
			cout<<"\nClass A";
		}
};

class B:virtual public A{
	public:
		void showB(){
			cout<<"\nClass B";
		}
};

class C: virtual public A
{
	public:
		void showC(){
			cout<<"\nClass C";
		}
};

class D:public B,public C{
	public:
		void showD(){
			cout<<"\nClass D";
		}	
};

int main()
{
	D d;
	d.showA();

return 0;
}

