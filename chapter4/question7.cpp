#include<iostream>
#include<queue>

using namespace std;

class stack {
public:
    queue<int> q1, q2; //two queues required as they are of fifo nature
    int size;

    stack() {
        size = 0; //initializing size by 0
    }

    void push(int x) {
        q2.push(x); //push x into queue2

        while (!q1.empty()) { //pop all elements of queue1 and push into queue2
            q2.push(q1.front());
            q1.pop();
        }

        queue<int> q = q1; //swap the queues
        q1 = q2;
        q2 = q;

        size++; //increase the stack size by 1
    }

    void pop() {
        if (q1.empty())
            return;
        q1.pop();
        size--; //decrease the stack size by 1
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
    
    s.pop();
    cout << s.top() << endl;
    
    return 0;
}
