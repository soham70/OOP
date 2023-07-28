// #include <bits/stdc++.h>
// using namespace std;

// class A{
//     protected:
//     int a;
//     public:
//     void get_a()
//     {
//         cout<<"\nEnter a: "<<endl;
//         cin>>a;
//     }
// };

// class B:public A{
//     protected:
//     int b;
//     public:
//     void get_b()
//     {
//         cout<<"\nEnter b: "<<endl;
//         cin>>b;
//     }
// };

// class C{
//     protected:
//     int c;

//     public:
//     void get_c()
//     {
//         cout<<"\nEnter c: "<<endl;
//         cin>>c;
//     }
// };

// class D:public B,public C{
//     protected:
//     int d;

//     public:
//     void get_d()
//     {
//         get_a();
//         get_b();
//         get_c();
//         cout<<"\na*b*c: "<<a*b*c;
//     }

// };

// int main(){

//     D d;
//     d.get_d();

// return 0;
// }

#include <bits/stdc++.h>
using namespace std;

class Edev
{
public:
    void edisp()
    {
        cout << "Class Edev";
    }
};

class Comp : public Edev
{
public:
    void cdisp()
    {
        cout << "\nClass Computer";
    }
};

class Windows : public Edev
{
public:
    void wdisp()
    {
        cout << "\nClass Windows";
    }
};

class Monitor : public Comp
{
public:
    void mdisp()
    {
        cout << "\nClass Monitor";
    }
};

int main()
{

    Monitor m;
    m.mdisp();
    m.edisp();
    m.cdisp();

    return 0;
}