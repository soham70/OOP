#include <bits/stdc++.h>
using namespace std;

class Animal
{
public:
    void eat()
    {
        cout << "Eating..";
    }
};

class Dog : public Animal
{
public:
    void barking()
    {
        cout << "\nBarking...";
    }
};

int main()
{

    Dog d;
    d.eat();
    d.barking();

    return 0;
}