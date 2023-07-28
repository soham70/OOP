#include <bits/stdc++.h>
using namespace std;

class Animal{
    public:
    void eat()
    {
        cout<<"\nEating...";
    }
};

class Dog:public Animal{
    public:
    void bark()
{
    cout<<"\nBarking....";
}
};

class BabyDog:public Dog{
    public:
    void smallb()
    {
        cout<<"\nSmall bark...";
    }
};


int main(){

    BabyDog bd;
    bd.eat();
    bd.bark();
    bd.smallb();

return 0;
}