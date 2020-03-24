#include <iostream>

using namespace std;

class node {
public:
    char data;
    node *next;
};

node *top;

void push(char data) {
    node *temp;
    temp = new node;

    temp->data = data;
    temp->next = top;
    top = temp;
}

bool empty() {
    return top == nullptr;
}

void pop() {
    node *temp;
    if (top == nullptr) {
        cout << "\nStack empty." << endl;
        return;
    } else {
        temp = top;
        top = top->next;
        temp->next = nullptr;
        delete temp;
    }
}

char peek() {
    if (!empty()) {
        return top->data;
    }
    return 0;
}

bool check_pair(char opening, char closing) {
    if (opening == '(' && closing == ')')
        return true;
    else if (opening == '{' && closing == '}')
        return true;
    else if (opening == '[' && closing == ']')
        return true;
    return false;
}

bool delimiter_matching(const string &str) {
    for (char i : str) {
        if (i == '(' || i == '{' || i == '[')
            push(i);
        else if (i == ')' || i == '}' || i == ']') {
            if (empty() || !check_pair(peek(), i))
                return false;
            else
                pop();
        }
    }
    return empty();
}

int main() {
    //string str{"5 + {(13 + 7) / 8 - 2 * 9"};
    string str{"5 + {(13 + 7) / 8 - 2 * 9} "};

    if (delimiter_matching(str))
        cout << "The expression contains matching grouping symbols.\n";
    else
        cout << "The expression does not contain matching grouping symbols.\n";

    return 1;
}
