#include <iostream>
using namespace std;


int main(){
  
    int n;
    cout<<"Enter size of the array: ";
    cin>>n;

 
    int arr[n];


    cout<<"Enter "<<n<<" diagonal elements: "<<endl;
    for(int i=0; i<n; i++){
        cout<<i+1<<").";
        cin>>arr[i];
    }
    cout<<"\n";
    
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if (i==j){
                cout<<arr[j]<<" ";
            }
            else{
                cout<<"0"<<" ";
            }
        }
        cout<<endl;
    }
}