//tridiagonal matrix - 3n-2 elements of n*n square elements 
#include <iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter size for the square matrix: ";
    cin>>n;
    int arr[3*n - 2];
    cout<<endl;
    
    cout<<"Enter the elements for the matrix in the following order: "<<endl;
    cout<<"1) "<<n-1<<" lower diagonal elements."<<endl;
    cout<<"2) "<<n<<" main diagonal elements."<<endl;
    cout<<"3) "<<n-1<<" upper diagonal elements."<<endl;
    
    cout<<endl;
    for(int i = 0; i< 3*n - 2; i++){
        cout<<i+1<<") ";
        cin>>arr[i];
    }
    
    cout<<endl;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(i-j == 1){
                cout<<arr[i-1]<<" ";
            }
            else if(i-j == 0){
                cout<<arr[n-1+i]<<" ";
            }
            else if(i-j == -1){
                cout<<arr[(2*n-1) + i]<<" ";
            }
            else{
                cout<<0<<" ";
            }
        }
        cout<<endl;
    }

}