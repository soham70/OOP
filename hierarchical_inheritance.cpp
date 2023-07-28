#include <bits/stdc++.h>
using namespace std;

class Main{
    public:
    void display()
    {
        cout<<"\nThis os main class"<<endl;
    }
};

class One:public Main{
    public:
    void odisp()
    {
        cout<<"\nClass One";
    }
};

class Two:public Main{
    public:
    void tdisp()
    {
        cout<<"\nClass Two";
    }
};


int main(){

    Two t;
    One o;

    o.odisp();

    t.tdisp();




return 0;
}