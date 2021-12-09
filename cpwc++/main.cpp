#include "headersandnamespaces.h"

using namespace std;

class Student
{
public:
    string name;
    int grade = 0;
    int id;

    Student()
    {
    }
    Student(string name)
    {
        this->name = name;
    }
    Student(string name, int id)
    {
        this->name = name;
        this->id = id;
    }
    Student(string name, int id, int grade)
    {
        this->name = name;
        this->id = id;
        this->grade = grade;
    }
    int upgradeGrade(int gradesUpgraded)
    {
        grade = grade + gradesUpgraded;
        return grade;
    }
    void displayInformation()
    {
        cout << "Name:\t" << name << endl;
        cout << "Grade:\t" << grade << endl;
        cout << "Id:\t" << id << endl;
    }
};

bool isInSameClass(Student s1, Student s2)
{
    if (s1.grade == s2.grade)
    {
        return true;
    }
    return false;
}

Student whoIsSenior(Student s1, Student s2)
{
    if (s1.grade > s2.grade)
    {
        return s1;
    }
    return s2;
}

class Example
{
public:
    friend class Example2;
    int i;
    int j;
};

class Example2
{
public:
    int myfunc(Example a, Example b)
    {
        return a.i + b.i;
    }
};

class Y;

class X
{
public:
    int data;
    void setValue(int value)
    {
        data = value;
    }
    // friend void add(X, Y);
};

class Y
{
public:
    int num;
    void setValue(int value)
    {
        num = value;
    }
    // friend void add(X, Y);
};

void add(X o1, Y o2)
{
    cout << "Summing data of X and Y objects gives me " << o1.data + o2.num;
}

class DateOfBirth
{
private:
    unsigned short day;
    unsigned short month;
    unsigned short year;

public:
    DateOfBirth()
    {
    }
};

class Users
{
    string password;
public:
    string full_name;
    DateOfBirth birthday;
    string gender;
    Users(string n, DateOfBirth b, string g, string p)
    {
        full_name = n;
        birthday = b;
        gender = g;
        password = p;
    }
};

int main()
{
    // Creating some Objects of Student class
    // Student IshanKishan("Ishan Kishan", 32, 7);
    // IshanKishan.upgradeGrade(1);
    // IshanKishan.displayInformation();
    // cout << endl;
    // Student Dhoni("MS Dhoni", 7, 20);
    // Dhoni.upgradeGrade(10);
    // Dhoni.displayInformation();

    // Using a constant variable
    // Initialize a consatnt variable on define while declare
    // Can't modify the value of a constant variable
    //    int x = 59;
    // cout << "Value of x is: " << x << endl;

    // Constant Object
    // A constant object can only use constant method
    // A regular object can use both constant method and regular method
    //    Student student1("Redoan Saleh", 211062, 7);
    // student1.displayInformation();

    // String
    // char name[100];
    // cout << "Enter your name: ";
    // gets(name);
    // cout << "Your name is " << name << endl;

    // Using friend function
    // Student me("Redoan Saleh", 211062, -80), rohit("Rohit Sharma", 231042, 0);
    // if (isInSameClass(me, rohit))
    // {
    //     cout << me.name << " and " << rohit.name << " is in same class." << endl;
    // }
    // else
    // {
    //     cout << whoIsSenior(me, rohit).name << " is senior." << endl;
    // }

    // Global and Global static
    // a = 9;
    // c = 90;
    // auto i = 0;
    // cout << a << endl;
    // cout << x << endl;
    // cout << c << endl;
    // cout << i << endl;

    // Using friend function
    // Example a, b;
    // a.i = 8;
    // b.i = 9;
    // Example2 c;
    // cout << c.myfunc(a, b) << endl;

    // More on this
    // X a1;
    // a1.setValue(3);
    // Y b1;
    // b1.setValue(15);
    // add(a1, b1);

    // String functions
    // char first_name[] = "Redoan";
    // // cout << "Length of " << name << " is " << strlen(name) << endl;
    // char last_name[] = "Redoan";
    // // strcpy(name2, name);
    // if (strcmp(first_name, last_name))
    // {
    //     cout << "Your first name is " << first_name << endl;
    //     cout << "Your last name is " << last_name << endl;
    //     strcat(first_name, last_name);
    //     cout << "Your full name is " << first_name << endl;
    //     strupr(first_name);
    //     cout << "Your full name in uppercase is " << first_name << endl;
    //     strlwr(first_name);
    //     cout << "Your full name in lowercase is " << first_name << endl;
    // }
    // else
    // {
    //     cout << "First name and last name is same!" << endl;
    // }

    // encapsulation
    // DateOfBirth birthdayOfUser1(13, 10, 2007);
    // Users user1("Redoan Saleh", birthdayOfUser1, "male", "password");
    // cout << user1.password << endl;

    // new and delete keyword
    // int *arr = new int[3];
    // *arr = 9;
    // *(arr + 1) = 99;
    // *(arr + 2) = 999;
    // // delete[] arr;
    // for (int i = 0; i <= 2; i++)
    // {
    //     if(i == 0)
    //     {
    //         cout << "The value of arr[0] is " << *arr << endl;
    //     }
    //     else
    //     {
    //         cout << "The value of arr[" << i << "] is " << *(arr+i) << endl;
    //     }       
    // }

    getch();
}