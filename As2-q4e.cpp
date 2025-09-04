#include <iostream>
using namespace std;

int main(){
     string str1;
    cout<<"enter string: ";
    getline(cin, str1);
    string result;
    for(int i = 0; i<str1.length(); i++){
        char ch = tolower(str1[i]);
        result +=ch;
    }
    cout<<"the lower case string is: "<<result<<endl;

}
