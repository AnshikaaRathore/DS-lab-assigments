#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool isAnagram(string s1, string s2) {
    if (s1.size() != s2.size()) return false;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    return s1 == s2;
}

int main() {
    int T;
    cout << "Enter number of test cases: ";
    cin >> T;

    while (T--) {
        string str1, str2;
        cin >> str1 >> str2;

        if (isAnagram(str1, str2))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}

