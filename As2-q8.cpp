#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter size of array: ";
    cin>>n;

    int arr[n];

    cout<<"enter "<<n<<" numbers: \n";
    for(int i=0; i<n; i++){
        cout<<i+1<<") ";
        cin>>arr[i];
    }

    int count = 0;
    int flag = 0;
    //checking the condition
    

    for(int i = 0; i< n; i++){
        flag = 0;
        for(int j = 0; j<i; j++){
            if(arr[i]==arr[j]){
                flag = 1;
                break;
            }
        }
        if (flag == 0){
            count++;
        }
    }

    cout<<"number of distinct elements: "<<count<<endl;
}