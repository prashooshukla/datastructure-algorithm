#include <bits/stdc++.h>
using namespace std;

int binary_search(vector<int> &array, int to_find, int low, int high) {
    if (low <= high) {
        int mid = low + (high - low) / 2;
        // if element is at mid return mid
        if (array[mid] == to_find) {
            return mid;
        }
        // if arrar[mid] > to_find set higher index to (mid - 1)
        if (array[mid] > to_find) {
            return binary_search(array, to_find, low, mid - 1);
        }
        // if array[mid] < to_find set lower index to (mid + 1) 
        if (array[mid] < to_find) {
            return binary_search(array, to_find, mid + 1, high);
        }
    }
    // if element is not present
    return -1;
}

int main() {

    vector<int> array = {1, 3, 4, 6, 8, 9, 10};
    int to_find = 8;
    int N = (int) array.size();
    int index = binary_search(array, 8, 0, N - 1);
    cout << index << '\n';

    return 0;
}