#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &arr, int target, int low, int high) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
            return mid; 
        if (arr[mid] < target)
            low = mid + 1; 
            high = mid - 1; 
    }
    return -1; 
}

int main() {
    int n, target;

    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " sorted elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element to search: ";
    cin >> target;

    int index = binarySearch(arr, target, 0, n - 1);

    if (index != -1)
        cout << "Element found at index " << index << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
