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
    vector<int> arr = {1, 2, 3, 5, 6}; 
    int n = 6;
    cout << "Missing number: " << findMissingLinear(arr, n);
    return 0;
}
