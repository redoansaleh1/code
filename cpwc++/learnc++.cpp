#include <bits/stdc++.h>

using namespace std;

class Student
{
protected:
    int roll_no;

public:
    void set_roll(int r)
    {
        roll_no = r;
    }
    int get_number(void)
    {
        cout << "Your roll no: " << roll_no << endl;
        return roll_no;
    }
};

class Test : virtual public Student
{
protected:
    float math, physics;

public:
    void set_marks(float m1, float m2)
    {
        math = m1;
        physics = m2;
    }
    void printMark(void)
    {
        cout << "Your mark is here: " << endl;
        cout << "\tMath: " << math << endl;
        cout << "\tPhysics: " << physics << endl;
    }
};

class Sports : virtual public Student
{
protected:
    float score;

public:
    void set_score(float score)
    {
        this->score = score;
    }
    void printScore(void)
    {
        cout << "Your PT score is: " << score << endl;
    }
};

class Result : public Test, public Sports
{
    float total;

public:
    void display(void)
    {
        total = (score + math + physics) / 3;
        get_number();
        printMark();
        printScore();
        cout << "Your average score is: " << total << "%" << endl;
    }
};

int main()
{
    Result harry;
    harry.set_roll(211062);
    harry.set_marks(99.99, 99.99);
    harry.set_score(99.99);
    harry.display();
}