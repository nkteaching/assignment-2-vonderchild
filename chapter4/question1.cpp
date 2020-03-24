#include<iostream>
#include<stack>
#include<queue>

using namespace std;

void printstack(stack<int> s) {
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
}

int reverse_a(stack<int> &s, stack<int> &s1, stack<int> &s2) {
    while (!s.empty()) {
        s1.push(s.top());
        s.pop();
    }
    while (!s1.empty()) {
        s2.push(s1.top());
        s1.pop();
    }
    while (!s2.empty()) {
        s.push(s2.top());
        s2.pop();
    }
    return 1;
}

int reverse_b(stack<int> &s, queue<int> &q) {
    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }
    while (!q.empty()) {
        s.push(q.front());
        q.pop();
    }
    return 1;
}


int main() {
    stack<int> s, s1, s2;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    printstack(s);

    reverse_a(s, s1, s2);

    cout << endl;
    printstack(s);


    //b
    while (!s.empty())
        s.pop();

    queue<int> q;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout << endl;
    printstack(s);

    reverse_b(s, q);
    cout << endl;
    printstack(s);

    
    //(c)
    while (!s.empty())
        s.pop();

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout << endl;
    printstack(s);

    int num = 4, num2, top_element; // num is size of stack
    num--;
    while (num != 0) {
        num2 = num; // num2 is temporary size variable
        top_element = s.top();
        s.pop();
        while (num2 != 0) {
            s1.push(s.top());
            s.pop();
            num2--;
        }
        s.push(top_element);
        while(!s1.empty()){
            s.push(s1.top());
            s1.pop();
        }
        num--;
    }

    cout << endl;
    printstack(s);

}
