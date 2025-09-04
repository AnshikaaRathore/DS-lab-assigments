#include <iostream>
using namespace std;


int main(){
    int n;
    int num;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter number: ";
    cin>>num;
    int arr[n];
    int index=-1;

    bool found = false;

    
    cout<<"\ninput the array: "<<endl;
    for(int i = 0; i<n; i++){
        cout<<i+1<<") ";
        cin>>arr[i];
    }

    int l = 0;
    int r = n-1;
    
    while(l<=r){
        int mid = (l+r)/2;

        if(num == arr[mid]){
            found = true;
            index = mid;
            break;
        }
        else if(num < arr[mid]){
            r = mid-1;
        }
        else{
            l = mid+1;
        }
    }
    
    if(found == true){
        cout<<"number found at "<<index+1<<endl;
    }
    else{
        cout<<"The number isn't in the array"<<endl;
    }

}
