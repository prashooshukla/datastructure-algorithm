#include <iostream>
#include <vector>
using namespace std;

// merge function take two intervals
// one from start to mid
// second from mid+1, to end
// and merge them in sorted order
void merge(vector<int> &arr, int start, int mid, int end, char c = 's') {
    vector<int> temp(end - start + 1); // create a temp array

    // crawler for both interval
    int i = start;
    int j = mid + 1;
    int k = 0;

    // traverse both array and add smaller of both in temp array
    while (i <= mid and j <= end) {
        if (c == 'g') {
            if (arr[i] >= arr[j]) {
                temp[k] = arr[i];
                ++k; ++i;
            } else {
                temp[k] = arr[j];
                ++k; ++j;
            }
        } else {
            if (arr[i] <= arr[j]) {
                temp[k] = arr[i];
                ++k; ++i;
            } else {
                temp[k] = arr[j];
                ++k; ++j;
            }   
        }
    }

    // adding remaining elements in first interval
    while (i <= mid) {
        temp[k] = arr[i];
        ++k; ++i;
    }

    // adding remaining elements in second interval
    while (j <= end) {
        temp[k] = arr[j];
        ++k; ++j;
    }

    // copy temp to original array
    for (i = start; i <= end; ++i) {
        arr[i] = temp[i - start];
    }
}

// recursive implementation of merge sort
// default agrument decides ascending/descending order
void merge_sort(vector<int> &arr, int start, int end, char c = 's') {    
   
    if (start < end) {
        int mid = (start + end) / 2;
        merge_sort(arr, start, mid, c);
        merge_sort(arr, mid + 1, end, c);
        merge(arr, start, mid, end, c);
    }
}

// function to print the array
void print(vector<int> arr) {
    for (auto a: arr) {
        cout << a << " ";
    } cout << '\n';
}

signed main() {

    vector<int> arr = {5, 7, 1, 3, 6, 4, 2, 8};
    int n = arr.size();
    cout << "before sorting: ";
    print(arr);
    merge_sort(arr, 0, n - 1);
    cout << "after sorting: ";
    print(arr);

    arr = {5, 14, 7, 10, 9, 6, 4, 20, 18};
    n = arr.size();
    cout << "before reverse sorting: ";
    print(arr);
    merge_sort(arr, 0, n - 1, 'g'); // argument for sorting in reverse.
    cout << "after reverese sorting ";
    print(arr);
    
    return 0;
}