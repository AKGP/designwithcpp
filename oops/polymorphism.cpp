#include <bits/stdc++.h>
#include <cmath>

using namespace std;

class Parent
{

public:
    virtual void show()
    {
        cout << "I am parent" << endl;
    }

    virtual void whoami()
    {
        cout << "Parent" << endl;
    }
};

class Child : public Parent
{
public:
    virtual void show()
    {
        cout << "I am Child\n";
    }

    void whoami()
    {
        cout << "Child\n";
    }
};

int main()
{
    Parent *parentPtr;
    Child child;
    parentPtr = &child;
    parentPtr->show();
    pow(2, 2);
    return 0;
}