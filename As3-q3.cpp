#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(){
    string str;
    cout<<"Enter an expression";
    getline(cin,str);
    stack<char> st;
    for(int i=0;i<str.length();i++){
        if((str[i]=='[')||(str[i]=='{')||(str[i]=='(')){
            st.push(str[i]);
        }
        else if(str[i]==')' || str[i]=='}' || str[i]==']'){
        char top=st.top();
        if((top=='(')&&(str[i]==')') || (top=='{')&&(str[i]=='}') || (top=='[')&&(str[i]==']')){
            st.pop();
        }
        }
    }
    if(st.empty()){
       cout<<"Valid parenthesis";
    }
    else{
        cout<<"Invalid parenthesis";
    }
}