#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

template <class AnyType>class ArrayList
{
    struct ControlBlock
    {
        int capacity;
        AnyType *arr_ptr;
    };
    ControlBlock *s;

public:
    ArrayList(int capacity)
    {
        s = new ControlBlock;
        s->capacity = capacity;
        s->arr_ptr = new AnyType[s->capacity];
    }
    void push_item(int index, AnyType element)
    {
        if (index >= 0 && index <= s->capacity - 1)
            s->arr_ptr[index] = element;
        else
            cout << "Array index is not valid!" << endl;
    }
    void get_element(int index, AnyType &data)
    {
        if (index >= 0 && index <= s->capacity - 1)
            data = s->arr_ptr[index];
        else
            cout << "Array index is not valid!" << endl;
    }
    void view_List(void)
    {
        for (int i = 0; i < s->capacity; i++)
        {
            cout << " " << s->arr_ptr[i] << endl;
        }
    }
};

int main()
{
    ArrayList <string>list1(5);
    string data;
    list1.push_item(0, "Redoan");
    list1.push_item(1, "Saleh");
    list1.push_item(2, "C++");
    list1.push_item(3, "Coder");
    list1.push_item(4, "Programmer");
    list1.get_element(0, data);
    list1.view_List();
    cout << "Value of data " << data << endl;

    return 0;
}