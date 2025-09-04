#include <iostream>
#include <string>
using namespace std;

int main(){
    string str1;
    cout<<"Enter a string: ";
    getline(cin, str1);

    string str2;
    
    int len1 = str1.length();
    str2.resize(len1);

    for(int i = 0; i<len1; i++){
        str2[i] = str1[len1-1-i];
    }

    cout<<"the reversed string is: "<<str2;
}
