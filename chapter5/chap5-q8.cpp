#include<iostream>

using namespace std;

int multiply(int a, int b) {
    if (a == 0 || b == 0)
        return 0;
    return a + multiply(a, b - 1);
}

int main() {
    int a = 4;
    int b = 5;
    cout << multiply(a, b);
    return 1;
}