#include <bits/stdc++.h>
using namespace std;

class Base{
    public:
  virtual 
  void show()
    {
        cout<<"\nBase Class";
    }
};

class Der:public Base{
    public:
    void show()
    {
        cout<<"\nDerived 1";
    }
};

class Derv:public Base{
    public:
    void show()
    {
        cout<<"\nDerivd 2";
    }
};


int main(){
    Base *ptr;

    ptr=new Der();

    ptr->show();

    ptr=new Derv();

    ptr->show();


return 0;
}