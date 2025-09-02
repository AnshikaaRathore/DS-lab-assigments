#include <iostream>
using namespace std;

int main(){
    int r1,c1,r2,c2,a,b;
    
    
    cout<<"rows for first array: ";
    cin>>r1;
    cout<<"columns for first array: ";
    cin>>c1;
    cout<<"rows for second array: ";
    cin>>r2;
    cout<<"columns for second array: ";
    cin>>c2;
    
    int arr[r1][c1];
    int brr[r2][c2];
    cout<<endl;
    
   
    cout<<"enter first matrix: ";
    for(int i = 0; i<r1; i++){
        for(int j = 0; j<c1; j++){
            cin>> arr[i][j];
        }
    }
    cout<<endl;
    
    cout<<"enter second matrix: ";
    for(int i = 0; i<r2; i++){
        for(int j = 0; j<c2; j++){
            cin>> brr[i][j];
        }
    }
    cout<<endl;
    

    int crr[r1][c2];
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            crr[i][j] = 0;
        }
    }

    if(c1==r2){
       
        for(int i = 0; i<r1; i++){
            for(int j = 0; j<c2; j++){
                for(int k = 0; k<c1; k++){
                    crr[i][j] += arr[i][k]*brr[k][j];
                }
            }
        }
    }

   
    cout<<"displaying the multiplied matrix;"<<endl;
    for(int i = 0; i<r1; i++){
        for(int j = 0; j<c2; j++){
            cout<<crr[i][j]<<" ";
        }
        cout<<endl;
    }
}    