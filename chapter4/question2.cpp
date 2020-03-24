#include <bits/stdc++.h>

using namespace std;

void sortStack(stack<int> &s) {
    stack<int> tmpStack;

    while (!s.empty()) {
        int tmp = s.top(); //pop the top element of stack into temp variable
        s.pop();

        while (!tmpStack.empty() && tmpStack.top() > tmp) { // till the tempstack is empty and top is less than temp
            s.push(tmpStack.top());
            tmpStack.pop();
        }

        // push temp in tempory of stack
        tmpStack.push(tmp);
    }

    //reversing the stack to arrange the values in ascending order
    while (!tmpStack.empty()) {
        s.push(tmpStack.top());
        tmpStack.pop();
    }
}

int main() {
    stack<int> s;
    s.push(5);
    s.push(6);
    s.push(1);
    s.push(9);
    s.push(2);
    s.push(42);

    sortStack(s);

    cout << "Stack in ascending order: ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

}