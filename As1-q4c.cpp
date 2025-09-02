#include <iostream>
using namespace std;

int main(){
    int r,c;

    cout<<"enter no. of rows: ";
    cin>>r;
    cout<<"enter no. of columns: ";
    cin>>c;

    int arr[r][c];
    int trr[c][r];
    cout<<"\n";
   

    cout<<"enter the elements of the arrays: "<<endl;
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            cin>> arr[i][j];
        }
    }
    cout<<"\n";
    
    
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            trr[j][i] = arr[i][j];
        }
    }
    
    cout<<"\n";

    cout<<"the transpose of the array is: "<<endl;
    for(int i = 0; i<c; i++){
        for(int j = 0; j<r; j++){
            cout<<trr[i][j]<<" ";
        }
        cout<<endl;
    }
}
