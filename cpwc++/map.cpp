#include <bits/stdc++.h>

using namespace std;

int pageCount(int n, int p) {
    int flip = 0, pageOpened[2] = {0, 1};
    
    while (true) {
        if (pageOpened[0] == p || pageOpened[1] == p) {
            break;
        }
        pageOpened[0] += 2;
        pageOpened[1] += 2;
        flip++;
    }
    
    return flip;
}

int main()
{
    cout << pageCount(7, 1) << endl;
    cout << pageCount(7, 4) << endl;
    cout << pageCount(7, 2) << endl;
    cout << pageCount(7, 5) << endl;
    cout << pageCount(7, 3) << endl;
    cout << pageCount(7, 6) << endl;
    cout << pageCount(6, 3) << endl;
}