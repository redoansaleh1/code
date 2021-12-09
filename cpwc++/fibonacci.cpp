#include <bits/stdc++.h>

using namespace std;

static int iterations = 0;
unsigned long long memo[9999999];

unsigned long long fib(unsigned long long n, unsigned long long memo[]) {
    iterations++;
    memo[1] = 1;
    memo[2] = 1;
    if (memo[n] != 0)
        return memo[n];
    else {
        memo[n] = fib(n - 1, memo) + fib(n - 2, memo);
    }
    return memo[n];
}

int main() {
    cout << "10th fibonacci number " << fib(10, memo) << " and iterations is " << iterations << endl;
    cout << "20th fibonacci number " << fib(20, memo) << " and iterations is " << iterations << endl;
    cout << "30th fibonacci number " << fib(30, memo) << " and iterations is " << iterations << endl;
}