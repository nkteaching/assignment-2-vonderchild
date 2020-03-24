#include<iostream>

using namespace std;

int multiply(int a, int b) { //the function adds a to itself b times
    if (a == 0 || b == 0) //comparison if a or b is 0
        return 0;
    return a + multiply(a, b - 1); //addition and subtraction
}

int main() {
    int a = 4;
    int b = 5;
    cout << multiply(a, b);
    return 1;
}
