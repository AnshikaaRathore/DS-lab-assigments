#include<iostream>
#include<vector>
using namespace std;

int n;
cout << "Enter size of array: ";
cin >> n;

vector<int> arr(n);
cout << "Enter elements: ";
for (int i = 0; i < n; i++) {
    cin >> arr[i];
}

duplicateZeros(arr);

cout << "Array after duplicating zeros: ";
for (int num : arr) {
    cout << num << " ";
}
cout << endl;

return 0;
