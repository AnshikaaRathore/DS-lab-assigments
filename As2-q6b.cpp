#include<iostream>
using namespace std;

void bubblesort(int c[20][3], int);

int main(){
    int i, j, r1, c1, val1, a[20][3];
    cout<<"Enter rows, cols and non-zero elements of A: ";
    cin>>r1>>c1>>val1;

    a[0][0]=r1; a[0][1]=c1; a[0][2]=val1;

    cout<<"Enter non-zero elements of A (row, col, value):\n";
    for(i=1; i<=val1; i++)
        cin>>a[i][0]>>a[i][1]>>a[i][2];

    int r2, c2, val2, b[20][3];
    cout<<"Enter rows, cols and non-zero elements of B: ";
    cin>>r2>>c2>>val2;

    b[0][0]=r2; b[0][1]=c2; b[0][2]=val2;

    cout<<"Enter non-zero elements of B (row, col, value):\n";
    for(i=1; i<=val2; i++)
        cin>>b[i][0]>>b[i][1]>>b[i][2];

    // Both matrices must be of same size
    if(r1!=r2 || c1!=c2){
        cout<<"Matrix addition not possible!\n";
        return 0;
    }

    int c[20][3], k=1;
    i=1; j=1;

    while(i<=val1 && j<=val2){
        if(a[i][0]==b[j][0] && a[i][1]==b[j][1]){
            c[k][0]=a[i][0];
            c[k][1]=a[i][1];
            c[k][2]=a[i][2]+b[j][2];
            k++; i++; j++;
        }
        else if(a[i][0] < b[j][0] || 
                (a[i][0]==b[j][0] && a[i][1] < b[j][1])){
            c[k][0]=a[i][0];
            c[k][1]=a[i][1];
            c[k][2]=a[i][2];
            k++; i++;
        }
        else {
            c[k][0]=b[j][0];
            c[k][1]=b[j][1];
            c[k][2]=b[j][2];
            k++; j++;
        }
    }

    // Remaining elements
    while(i<=val1){
        c[k][0]=a[i][0]; c[k][1]=a[i][1]; c[k][2]=a[i][2];
        k++; i++;
    }
    while(j<=val2){
        c[k][0]=b[j][0]; c[k][1]=b[j][1]; c[k][2]=b[j][2];
        k++; j++;
    }

    // metadata
    c[0][0]=r1;
    c[0][1]=c1;
    c[0][2]=k-1;

    bubblesort(c, k);

    cout<<"\nResultant Sparse Matrix (row, col, value):\n";
    for(i=0; i<k; i++){
        cout<<c[i][0]<<"  "<<c[i][1]<<"  "<<c[i][2]<<"\n";
    }

    return 0;
}

void bubblesort(int c[20][3], int n){
    int i, j, temp, k;
    for(i=1; i<n-1; i++){
        for(j=1; j<n-i; j++){
            if(c[j][0]>c[j+1][0] || 
              (c[j][0]==c[j+1][0] && c[j][1]>c[j+1][1])) {
                for(k=0; k<3; k++){
                    temp=c[j][k];
                    c[j][k]=c[j+1][k];
                    c[j+1][k]=temp;
                }
            }
        }
    }
}
