#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter size of symmetric matrix: ";
    cin>>n;

    int elements = n*(n + 1)/2; 
    int arr[elements];

    cout<<"\nPlease enter "<<elements<<" elements:\n";
    for(int i = 0; i < elements; i++){
        cout<<i+1<<") ";
        cin>>arr[i];
    }

    cout<<"\nThe symmetric matrix is:\n";

    
    for(int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++) {
            if (i >= j) {
                cout << arr[((j-1)*(2*n-j+2))/2+(i-j)] << " ";
            } else {
                cout << arr[((j-1)*(2*n-j+2))/2+(i-j)] << " ";
            }
        }
        cout << endl;
    }

}    

