#include <iostream>

using namespace std;

class node {
public:
    int data;
    node *next;
};

class linked_list {
public:
    node *head;
    int size;

    linked_list() {
        head = nullptr;
        size = 0;
    }

    void insert(int val) {
        node *newnode = new node;
        newnode->data = val;
        newnode->next = nullptr;
        if (head == nullptr) {
            head = newnode;
        } else {
            node *current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newnode;
        }
        size++;
    }

    void display() {
        if (head == nullptr) {
            cout << "LIST IS EMPTY!" << endl;
        } else {
            node *current = head;
            while (current != nullptr) {
                cout << current->data << " ";
                current = current->next;
            }
            cout << endl;
        }

    }

    static int length(node *current, int l) {
        if (current == nullptr)
            return l;
        else
            return length(current->next, l + 1);
    }


};

int main() {
    auto *l = new linked_list();
    l->insert(1);
    l->insert(2);
    l->insert(3);
    l->insert(4);
    l->insert(5);
    l->insert(6);
    l->display();

    cout << "Length of linked list: " << linked_list::length(l->head, 0) << endl;

    return 0;
}