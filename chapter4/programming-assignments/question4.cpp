#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    stack<int> s1, s2, s3;
    string str1 = "1", str2 = "999";

    for (char c : str1) {   //range based loop
        s1.push(c - '0'); //converting char to int and pushing to stack1
    }

    for (char c : str2) {   //range based loop
        s2.push(c - '0'); //converting char to int and pushing to stack2
    }

    int carry = 0;
    while (!s1.empty() || !s2.empty()) { // while one of the stack is empty
        int top1 = 0, top2 = 0;
        if (!s1.empty()) {
            top1 = s1.top();
            s1.pop(); // popping top of first stack
        }
        if (!s2.empty()) {
            top2 = s2.top();
            s2.pop(); // popping top of second stack
        }
        carry += (top1 + top2);
        s3.push(carry % 10); // pushing unit to stack

        if (carry >= 10)
            carry = 1;
        else
            carry = 0;
    }

    if (carry != 0) // if carry is not 0, push it to the stack
        s3.push(carry);

    cout << "Sum of two numbers: ";
    while (!s3.empty()) { // print the stack
        cout << s3.top();
        s3.pop();
    }

    return 0;
}
