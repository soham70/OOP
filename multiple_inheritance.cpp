#include <bits/stdc++.h>
using namespace std;

class B1
{
protected:
    int a;

public:
    void get_a(int n)
    {
        a = n;
    }
};

class B2
{
protected:
    int b;

public:
    void get_b(int n)
    {
        b = n;
    }
};

class C : public B1, public B2
{

public:
    void disp()
    {
        cout << "a=" << a << endl;
        cout << "b=" << b << endl;
        cout << "a+b=" << a + b << endl;
    }
};

int main()
{

    C c;
    c.get_a(10);
    c.get_b(20);
    c.disp();

    return 0;
}