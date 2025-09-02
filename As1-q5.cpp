#include <iostream>
using namespace std;

int main(){
    int r,c;
    int row_sum=0;
    int column_sum=0;

    cout<<"enter no. of rows: ";
    cin>>r;
    cout<<"enter no. of columns: ";
    cin>>c;

    int arr[r][c];

    cout<<"\n";
   

    cout<<"enter the elements of the arrays: "<<endl;
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            cin>> arr[i][j];
        }
    }
    cout<<"\n";

   
    for(int i=0; i<r; i++){
        for(int j =0; j<c; j++){
            row_sum += arr[i][j];
        }
    }

    for(int j=0; j<c; j++){
        for(int i =0; i<r; i++){
            column_sum += arr[i][j];
        }
    }

    cout<<"sum of row's elements: "<<row_sum<<endl;
    cout<<"sum of column's elements: "<<column_sum<<endl;

}