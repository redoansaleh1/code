#include <bits/stdc++.h>
using namespace std;

// global variable
map<pair<long long int, long long int>, long long> memo;

long long gridTravlar(long long int n, long long int m, map<pair<long long int, long long int>, long long> *memo) {
    pair<long long, long long> key(n, m);
    if (memo->operator[](key) != 0)
        return memo->operator[](key);
    if (n == 1 and m == 1)
        return 1;
    if (n == 0 or m == 0)
        return 0;
    memo->operator[](key) = gridTravlar(n - 1, m, memo) + gridTravlar(n, m - 1, memo);
    return memo->operator[](key);
}

int main() {
    int t, n, m;
    cin >> t;
    while(t--) {
        cin >> n >> m;
        cout << gridTravlar(n, m, &memo) << endl;
    }
}