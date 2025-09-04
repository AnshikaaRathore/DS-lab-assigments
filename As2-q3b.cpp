#include <iostream>
#include <vector>
using namespace std;

int findMissingBinary(vector<int>& arr, int n) {
    int left = 0, right = arr.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;

        
        if (arr[mid] == mid + 1) {
            left = mid + 1;
        } 
       
        else {
            right = mid - 1;
        }
    }
    return left + 1; 
}

int main() {
    int n;
    cout << "Enter value of n (range 1 to n): ";
    cin >> n;

    vector<int> arr(n - 1);
    cout << "Enter " << n - 1 << " sorted elements (missing one number):"<<endl;
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }

    cout << "Missing number: " << findMissingBinary(arr, n) << endl;

    return 0;
}
