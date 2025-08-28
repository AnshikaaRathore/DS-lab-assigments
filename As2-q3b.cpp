#include <iostream>
#include <vector>
using namespace std;

int findMissingBinary(vector<int>& arr, int n) {
    int left = 0, right = arr.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
       
        if (arr[mid] == mid + 1) {
         left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return left + 1; 
}

int main() {
    vector<int> arr = {1, 2, 3, 5, 6}; 
    int n = 6;
    cout << "Missing number: " << findMissingBinary(arr, n);
    return 0;
}
