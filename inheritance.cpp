#include<iostream>
using namespace std;

class Parent{
	public:
		string surname;
		int money;
};

class Child:public Parent{
	public:
		Child()
		{
			surname="Sheth";
			money=10000;
		}
		void show()
		{
			cout<<"Soham"<<" "<<surname<<endl;
		}
};


int main()
{
	Child C;
	C.show();

return 0;
}

