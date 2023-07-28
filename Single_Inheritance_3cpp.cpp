#include <bits/stdc++.h>
using namespace std;

class A{
    int a=10;
    int b=20;

    public:
    int mul()
    {
    int res=a*b;
    }
};

class B:private A{
    public:
    void display()
    {
        cout<<"\nAnswer= "<<mul();
    }

};

int main(){

B b;

b.display();


return 0;
}