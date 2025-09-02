
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter number of elements: ";
    cin>>n;
    int arr[n];

    int brr[n];
    cout<<endl;

    for(int i = 0; i<n; i++){
        cout<<i+1<<") ";
        cin>>arr[i];
    }
  
    for(int j = 0; j<n; j++){
        brr[n-1-j]=arr[j];
    }

    cout<<"the reversed array is: "<<endl;
    
    for(int k=0; k<n; k++){
        cout<<k+1<<") "<<brr[k]<<endl;
    }
}