#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter number of strings: ";
    cin >> n;
    cin.ignore(); 
    vector<string> arr(n);

    cout << "Enter strings:\n";
    for (int i = 0; i < n; i++) {
        getline(cin, arr[i]);
    }

    sort(arr.begin(), arr.end());

    cout << "Strings in alphabetical order:\n";
    for (string s : arr) {
        cout << s << endl;
    }
    return 0;
}
