#include <iostream>
using namespace std;

int max_size = 100;


//create function 
void create(int arr[], int &n) {
    
    cout << "\n-- CREATE ARRAY --"<<endl;

    cout<<"enter size of array: ";
    cin>>n;

    for (int i = 0; i<n; i++){
        cout<<"element "<<i+1<<" ";
        cin>>arr[i];
    }

}

void Display(int arr[], int n){
    cout<<"-- displaying array --"<<endl;

    for(int i=0; i<n; i++){
        cout<<"element - "<<i+1<<": "<<arr[i]<<endl;;
    }   
}

void insert(int arr[], int& n){
    cout<<"-- insert element at a given position --"<<endl;

    int value; 
    cout<<"enter value to be inserted: ";
    cin>>value;

    int index;
    cout<<"enter the index: ";
    cin>>index;

    //shifiting elements for insertion
    for(int i=n; i>index; i--){
        arr[i] = arr[i-1];
    }

    arr[index] = value;
    n++;
    cout<<"element inserted successfully!"<<endl;
    Display(arr, n);

}

void Delete(int arr[], int &n){
    int num;
    cout<<"enter number to be inserted";
    cin>>num;
    int pos = -1;

    for(int i=0; i<n; i++){
        if(num == arr[i]){
            pos = i;
            break;
        }
    }
    if (pos == -1){
        cout << "num not found , so we are deleting last element"<<endl;
        pos = n-1;
    }
    // cout<<"enter position to delete from";
    // cin>> pos;

    for (int i = pos; i<n-1; i++){
        arr[i]=arr[i+1];
    }
    n--;
    cout<<"element deleted successfully!!"<<endl;
    Display(arr,n);
}
void linearSearch(int arr[], int n){
    int num;
    int flag = 0;
    cout<<"enter value to search: ";
    cin>>num;

    for (int i = 0; i<n; i++){
        if(arr[i] == num){
            cout << "element found at index- "<<i<<endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0){
        cout<<"element not found"<<endl;
    }
}


int main(){
    
    cout<<"---MENU--"<<endl;
    cout<<"1) CREATE"<<endl;
    cout<<"2) DISPLAY"<<endl;
    cout<<"3) INSERT"<<endl;
    cout<<"4) DELETE"<<endl;
    cout<<"5) LINEAR SEARCH"<<endl;
    cout<<"6) EXIT"<<endl;
    int n=0;
    int x;
    int arr[max_size];

    
    do{
        cout<<"enter case: ";
        cin>>x;
        switch (x){
            case 1:
                create(arr, n);
                break;
            case 2:
                Display(arr, n);
                break;
            case 3:
                insert(arr, n);
                break;
            case 4:
                Delete(arr, n);
                break;    
            case 5:
                linearSearch(arr, n);
                break;
            case 6:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "invalid choice"<<endl;
        }
    }while(x != 6);
}