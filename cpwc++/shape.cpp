#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

class Shape
{
public:
    double a, b;
    Shape(double a, double b)
    {
        this->a = a;
        this->b = b;
    }
    Shape(double a)
    {
        this->a = a;
    }
    virtual double area(void) = 0;
};

class Rectangular:public Shape
{
public:
    Rectangular(double a, double b) : Shape(a, b)
    {
    }
    double area(void)
    {
        return a*b;
    }
};

class Triangle:public Shape
{
public:
    Triangle(double a, double b) : Shape(a, b)
    {
    }
    double area(void)
    {
        return 0.5*a*b;
    }
};

class Square:public Shape
{
public:
    Square(double a) : Shape(a)
    {
    }
    double area(void)
    {
        return a*a;
    }
};

int main()
{
    Triangle s1(4.5, 6.7);
    Rectangular s2(4.5, 6.7);
    Square s3(9);
    cout << s1.area() << endl;
    cout << s2.area() << endl;
    cout << s3.area() << endl;

    return 0;
}