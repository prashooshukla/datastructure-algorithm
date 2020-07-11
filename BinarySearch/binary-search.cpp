#include <bits/stdc++.h>
using namespace std;

int binary_search(vector<int> &array, int to_find) {
    int N = (int) array.size();
    int low = 0; // starting index of array
    int high = N - 1; // last index of array
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        // if element is at mid return mid
        if (array[mid] == to_find) {
            return mid; 
        }
        // if arrar[mid] > to_find set higher index to (mid - 1)
        if (array[mid] > to_find) {
            high = mid - 1;
        }
        // if array[mid] < to_find set lower index to (mid + 1) 
        if (array[mid] < to_find) {
            low = mid + 1;
        }
    }
    // if element is not present
    return -1;
}

int main() {

    vector<int> array = {1, 3, 4, 6, 8, 9, 10};
    int to_find = 8;
    int index = binary_search(array, 8);
    cout << index << '\n';

    return 0;
}