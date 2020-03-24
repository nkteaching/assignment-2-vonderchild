#include <iostream>

using namespace std;

int shortest(int n, int i) {
    if (i != n) {
        cout << i << " ";
        return shortest(n, i + 1);
    }
}

int main() {
    cout << shortest(3, 0);
}