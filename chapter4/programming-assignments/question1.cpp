#include<iostream>
#include<stack>

using namespace std;

int main() {
    string str{"madam"};

    stack<char> s;
    for (char i:str)
        s.push(i);

    string newstr;
    while (!s.empty()) {
        newstr += s.top();
        s.pop();
    }

    if (str == newstr)
        cout << "String is a palindrome!" << endl;
    else
        cout << "String is not a palindrome!" << endl;

}
