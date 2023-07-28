#include<iostream>
using namespace std;

class Student{
	string name;
	int age;
	public:
		void setter(int a,string n)
		{
			age=a;
			name=n;
		}
		void show()
		{
			cout<<"\nName: "<<name<<" Age: "<<age;
		}
};


int main()
{
	Student s;
	s.setter(21,"Soham");
	s.show();

return 0;
}

