#include <bits/stdc++.h>
using namespace std;

class Number{
    public:
    int x,y;

    Number operator-()
    {
        Number temp;
        temp.x=-x;
        temp.y=-y;
        return temp;
    }

    void show()
    {
        cout<<"\nx="<<x<<" y= "<<y;
    }
};

int main(){

    Number T1,T2;
    T1.x=5;
    T1.y=6;
    T2=T1.operator-();
    T2=-T1;
    T2.show();
return 0;
}