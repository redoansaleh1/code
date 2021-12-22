#include <iostream>
#include <vector>
#include <conio.h>

class MergeSort {
public:
    static void merge_sort(std::vector<int> arr, int last_index, int first_index = 0);
private:
    void merge(std::vector<int> arr, int left_index, int middle_index, int right_index);
};
void MergeSort::merge(const std::vector<int> &arr, int left_index, int middle_index, int right_index) {
    int i, index_a, index_l, index_r, size_left, size_right;
    size_left  = middle_index - left_index + 1;
    size_right = right_index - mid;
    int L[size_left];
    int R[size_right];
    for (int i = 0; i < size_left; i++) {
        L[i] = arr[left + i];
    }
    for (int i = 0; i < size_right; i++) {
        R[i] = arr[mid + i + 1];
    }
}
void MergeSort::merge_sort(const std::vector<int> &arr, int last_index, int first_index = 0) {
}

int main() {
    std::vector<int> arr;
    for (int i = 1; i <= 10; i++) {
        arr[i - 1] = i;
    }
    std::cout << "Before sorting the array: " << std::endl;
    for (auto element : arr) {
        std::cout << element << ", ";
    }
    std::cout << std::endl;
    MergeSort::merge_sort(arr, (arr.size() - 1));
    std::cout << "After sorting the array using merge sort: " << std::endl;
    for (auto element : arr) {
        std::cout << element << ", ";
    }
    std::cout << std::endl;
}