#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter num of elements: ";
    cin>>n;
    int arr[n];

    for (int i = 0; i<n; i++){
        cout<<i+1<<") ";
        cin>>arr[i];
    }
    cout<<"\n------------------------\n";

    // code for finding the duplicates:

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                //we have to delete the arr[j] waala element
                
                for(int k = j; k<n-1; k++){
                    arr[k] = arr[k+1];
                }
                n--;
                j--;//cause after shifting new element at j we haven't checked that element yet so by doing j-- and a j++ we check the element at j also
            }
        }
    }

    //displaying the array
    for(int i =0; i<n; i++){
        cout<<i+1<<".) "<<arr[i]<<endl;
    }
}