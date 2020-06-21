#include <iostream>
#include <vector>
using namespace std;


//function to sort the array in increasing order
void insertion_sort(vector<int> &arr, int n)
{
    int i, key;
    for (int j = 1; j < n; j++) {
        key = arr[j];
        i = j - 1;
        while (i >= 0 and arr[i] > key) {
            arr[i + 1] = arr[i];
            i = i - 1;
        }
        arr[i + 1] = key;
    }
}

//overloaded function to sort the array in increasing order
void insertion_sort(string& str) {
    int i;
    char key;
    int n = (int) str.size();
    for (int j = 1; j < n; j++) {
        key = str.at(j);
        i = j - 1;
        while (i >= 0 and str.at(i) > key) {
            str.at(i + 1) = str.at(i);
            --i;
        }
        str.at(i + 1) = key;
    }
} 

//function to sort the array in decreasing order
void reverse_insertion_sort(vector<int>& arr, int n) {
    int i, key;
    for (int j = 1; j < n; j++) {
        key = arr[j];
        i = j - 1;
        while (i >= 0 and arr[i] < key) {
            arr[i + 1] = arr[i];
            i = i - 1;
        }
        arr[i + 1] = key;
    }
} 

//overloaded function to sort the array in increasing order
void reverse_insertion_sort(string& str) {
    int i;
    char key;
    int n = (int) str.size();
    for (int j = 1; j < n; j++) {
        key = str.at(j);
        i = j - 1;
        while (i >= 0 and str.at(i) < key) {
            str.at(i + 1) = str.at(i);
            --i;
        }
        str.at(i + 1) = key;
    }
} 

//function to print the array
void print(vector<int> arr) {
    vector<int>::iterator it;
    for (it = arr.begin(); it != arr.end(); ++it) {
        cout << *it << " ";
    } cout << '\n';
}

signed main()
{
    vector<int> arr = {7, 1, 5, 7, 8, 2, 4, 9, 6};
    int n = arr.size();
    cout << "before sorting:\n";
    print(arr);
    insertion_sort(arr, n);
    cout << "after sorting:\n";
    print(arr);
   
    reverse_insertion_sort(arr, n);
    cout << "after reverese sort:\n";
    print(arr);
   
    string str = "iamanoobprogrammer";
    cout << "string before sorting: " << str << '\n';
    insertion_sort(str);
    cout << "string after sorting: " << str << '\n';
    
    str = "iamgoodindoingnoting";
    cout << "string before reverse sorting: " << str << '\n';
    reverse_insertion_sort(str);
    cout << "string after sorting: " << str << '\n';
    
    return 0;
}