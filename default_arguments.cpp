#include<iostream>
using namespace std;

class A{
	public:
		int add(int a,int b,int c=10)
		{
			return a+b+c;
		}
		
};


int main()
{
	A a;
	cout<<a.add(5,15,5);

return 0;
}

