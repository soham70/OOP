#include<iostream>
using namespace std;

class Account{
	public:
		float Salary=60000;
};

class Programmer:public Account{
	public:
		float Bonus=5000;
};

int main()
{
	Programmer P1;
	cout<<"Salary: "<<P1.Salary<<endl;
	cout<<"Bonus: "<<P1.Bonus<<endl;
	

return 0;
}

