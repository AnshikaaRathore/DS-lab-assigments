//program to delete all the vowels from the string
#include <iostream>
#include <string>
using namespace std;

int main(){
    string str1;
    cout<<"enter string: ";
    getline(cin, str1);
    
    //checking for vowel and then deleteing and the starting again
    for(int i = 0; i<str1.length(); i++){
        char ch = tolower(str1[i]);
        if(ch == 'a'||ch == 'e'|| ch=='i'||ch=='o'||ch=='u'){
            for(int j =i; j<str1.length()-1; j++){
                str1[j] = str1[j+1];
            }

            str1.pop_back();//removing the last character after shifting
            i--;//again checking after shifiting
        }
    }

    cout<<"the string without vowels: "<<str1<<endl;
}
