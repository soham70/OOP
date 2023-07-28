//#include<iostream>
//using namespace std;
//
//class Base{
//	int b;
//	friend void calc();
//};
//
//class Power{
//	int p;
//	friend void calc();
//};
//
//void calc()
//{
//	Base bobj;
//	Power pobj;
//	
//	cout<<"\nEnter Base: ";
//	cin>>bobj.b;
//	cout<<"\nEnter Power: ";
//	cin>>pobj.p;
//	
//	int i;
//	int ans=1;
//	for(int i=0;i<pobj.p;i++)
//	{
//		ans*=bobj.b;
//	}
//	cout<<"\nAnswer: "<<ans;
//}
//
//int main()
//{
//	calc();
//
//
//return 0;
//}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
//Friend Class
/*
A friend class can access both private and protected members 
of the class in which it has been declared as friend.
*/

#include<iostream>
using namespace std;

class A{
	int x=10;
	friend class B;
};

class B{
	public:
	void show(A &a)
	{
		cout<<"Value="<<a.x;
	}
};

int main()
{
	A a;
	B b;
	b.show(a);

}
