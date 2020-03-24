#include<iostream>

using namespace std;

class node {
public:
    string name;
    int age{};
    float salary{};
    node *next{};
};

class Stack {
public:
    int size;
    node *top;

    Stack() {
        size = 0;
        top = nullptr;
    }

    void push(string name, int age, float salary) {
        node *temp;
        temp = new node;

        temp->name = name;
        temp->age = age;
        temp->salary = salary;

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

    void display() {
        node *temp;
        if (top == nullptr) {
            cout << "\nStack empty." << endl;
            return;
        } else {
            temp = top;
            cout << endl;
            while (temp != nullptr) {
                cout << temp->name << " " << temp->age << " " << temp->salary << endl;
                temp = temp->next;
            }
        }
    }

};

int main() {
    Stack s;
    s.push("Saad", 18, 0);
    s.display();
}