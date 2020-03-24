#include<iostream>
#include<queue>

using namespace std;

class stack {
public:
    queue<int> q1, q2;
    int size;

    stack() {
        size = 0;
    }

    void push(int x) {
        q2.push(x);

        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }

        queue<int> q = q1;
        q1 = q2;
        q2 = q;

        size++;
    }

    void pop() {
        if (q1.empty())
            return;
        q1.pop();
        size--;
    }

    int top() {
        if (!q1.empty())
            return q1.front();
        return 0;
    }

};

int main() {
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);

    return 0;
}