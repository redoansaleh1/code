#include <bits/stdc++.h>

using namespace std;

void printList(const list<int> &lst) {
    auto itr = lst.begin();
    if (lst.size() == 1 and advance(itr, 0) == 1)
        return;
    for (auto &node : lst) {
        cout << node << " ";
    }
    cout << endl;
    return;
}

list<int> howSum(int targetSum, const list<int> &numbers) {
    if (targetSum == 0) {
        list<int> emptyList;
        return emptyList;
    }
    if (targetSum < 0) {
        list<int> nullList;
        nullList.push_back(1);
        return nullList;
    }
    for (auto &num : numbers) {
        const int remainder = targetSum - num;
        list<int> remainderResult = howSum(remainder, numbers);
        auto itr = remainderResult.begin();
        if (itr != NULL)
        if (remainderResult.size() != 1 and advance(itr, 0) != 1) {
            remainderResult.push_back(num);
            return remainderResult;
        }
    }
    list<int> nullList;
    nullList.push_back(1);
    return nullList;
}

int main() {
    printList(howSum(7, {2, 3}));
    printList(howSum(7, {5, 3, 4, 7}));
    printList(howSum(7, {2, 4}));
    printList(howSum(8, {2, 3, 5}));
    printList(howSum(300, {7, 14}));
}