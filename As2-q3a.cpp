#include <iostream>
#include <vector>
using namespace std;

int findMissingLinear(vector<int>& arr, int n) {
    int totalSum = n * (n + 1) / 2; 
    int arraySum = 0;

    for (int num : arr)
        arraySum += num; 

    return totalSum - arraySum; 
}

int main() {
    int n;
    cout << "Enter value of n (range 1 to n): ";
    cin >> n;

    vector<int> arr(n - 1);
    cout << "Enter " << n - 1 << " elements of the array (sorted):"<<endl;
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }

    cout << "Missing number: " << findMissingLinear(arr, n) << endl;
    return 0;
}
