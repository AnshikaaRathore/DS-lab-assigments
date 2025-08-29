#include <iostream>
using namespace std;

int countDistinct(int arr[], int n)
{
    int res = 1;

    for (int i = 1; i < n; i++) {
        int j = 0;
        for (j = 0; j < i; j++)
            if (arr[i] == arr[j])
                break;

        if (i == j)
            res++;
    }
    return res;
}

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ") ";
        cin >> arr[i];
    }

    cout << "Number of distinct elements: " << countDistinct(arr, n) << endl;
    return 0;
}
