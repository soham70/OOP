#include<iostream>
using namespace std;

class A{
	
	public:
		void sayhello()
		{
			cout<<"\nHello Soham";
		}
		
		void sayhello(string name)
		{
			cout<<"\nHello "<<name;
		}
		int sayhello(int n)
		{
			cout<<"\nHello "<<n;
		}
			
};

int main()
{
	A a;
	a.sayhello(10);

return 0;
}

