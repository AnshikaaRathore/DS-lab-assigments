#include <iostream>
#include <stack>
using namespace std;

string reverseString(string str) {
    stack<char> st;

   
    for (char c : str) {
        st.push(c);
    }

   
    string reversed = "";
    while (!st.empty()) {
        reversed += st.top();
        st.pop();
    }

    return reversed;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    string result = reverseString(input);

    cout << "Reversed string: " << result << endl;

    return 0;
}
