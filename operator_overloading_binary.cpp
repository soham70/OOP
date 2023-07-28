// #include <bits/stdc++.h>
// using namespace std;

// class Number{
//     public:
//     int x,y;

//     Number()
//     {
//         x=0,y=0;
//     }
//     Number(int a,int b)
//     {
//         x=a;
//         y=b;
//     }

//     Number operator+(Number T)
//     {
//         Number ans;
//         ans.x=x+T.x;
//         ans.y=y+T.y;
//         return ans;
//     }

//     void show()
//     {
//         cout<<"x="<<x<<" y= "<<y;
//     }
// };


// int main(){
//     Number n1(5,4),n2(6,2),res;

//     res=n1+n2;

//     res.show();


// return 0;
// }

#include <bits/stdc++.h>
using namespace std;

class Number{
    public:
    int x,y;

    Number()
    {
        x=0,y=0;
    }

    Number(int a,int b)
    {
        x=a;
        y=b;
    }

    Number operator*(Number T)
    {
        Number ans;
        ans.x=x*T.x;
        ans.y=y*T.y;
        return ans;
    }

    void show()
    {
        cout<<"\nx="<<x<<" y= "<<y;
    }

};


int main(){

    Number n1(2,3),n2(5,4),n3;
    n3=n1*n2;

    n3.show();

return 0;
}