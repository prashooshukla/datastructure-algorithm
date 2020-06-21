#include <iostream>
#include <string>
#include <algorithm>

#define MAX_CHAR 26

using namespace std;

string sort(string str) {
    int small[26] = {0};
    int big[26] = {0};
    string op = "";
    for(int i = 0; i < str.size(); i++) {
        if (str[i] >= 'a' and str[i] <= 'z') {
            ++small[str[i] - 'a'];
        }
        if (str[i] >= 'A' and str[i] <= 'Z') {
            ++big[str[i] - 'A'];
        }
    }
    for (int i = 0; i < MAX_CHAR; i++) {
        for (int j = 0; j < small[i]; j++) {
            op += (char) ('a' + i);
        }
        for (int j = 0; j < big[i]; j++) {
            op += (char) ('A' + i);
        }
    }
    return op;
}

signed main() {

    string str = "KGSDLGJLgklsajslfkkLFKLDFGLKSsdgnlbnxlsejro";
    cout << "before sorting: " << str << '\n';
    str = sort(str);
    cout << "after sorting: " << str << '\n';

    return 0;
}