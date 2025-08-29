#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sort012(vector<int> &arr) {
    sort(arr.begin(), arr.end());
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements (only 0, 1, or 2):\n";
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ") ";
        cin >> arr[i];
    }

    sort012(arr);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
