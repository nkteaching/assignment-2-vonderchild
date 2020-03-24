#include<iostream>
#include<stack>

using namespace std;

//part (b) is inside main()


void printstack(stack<int> s) {
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
}

//(a)

int transfer_a(stack<int> &s, stack<int> s1) {
    while (!s.empty()) {
        s1.push(s.top());
        s.pop();
    }
    while (!s1.empty()) {
        s.push(s1.top());
        s1.pop();
    }
}

int main() {
    stack<int> s1, s2;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);

    printstack(s1);
    //(a)
    transfer_a(s1, s2);
    printstack(s1);

    //(b)
    int num = 4, num2, top_element;
    num--;
    while (num != 0) {
        num2 = num;
        top_element = s1.top();
        s1.pop();
        while (num2 != 0) {
            s2.push(s1.top());
            s1.pop();
            num2--;
        }
        s1.push(top_element);
        while (!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
        num--;
    }

    while (!s1.empty()) {
        s2.push(s1.top());
        s1.pop();
    }

    cout << endl;
    printstack(s2);

}
