#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

class A
{
protected:
    const int x = 50;
};

class B
{
protected:
    int x;
};

class C : public A, public B
{

public:
    C()
    {
        cout << B::x << endl;
    }
};

int main()
{
    C obj;

    return 0;
}