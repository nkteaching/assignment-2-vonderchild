#include <bits/stdc++.h>

using namespace std;

void arrange(stack<int> &s) {
    stack<int> temp;

    while (!s.empty()) {
        int tmp = s.top(); //pop the top element of stack into temp variable
        s.pop();

        while (!temp.empty() && temp.top() > tmp) { // till the tempstack is empty and top is less than temp
            s.push(temp.top());
            temp.pop();
        }

        // push temp in tempory of stack
        temp.push(tmp);
    }

    //reversing the stack to arrange the values in ascending order
    while (!temp.empty()) {
        s.push(temp.top());
        temp.pop();
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

    arrange(s);

    cout << "Stack in ascending order: ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

}
