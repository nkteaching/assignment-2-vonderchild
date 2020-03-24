#include<iostream>

using namespace std;

int cubes(int n) {
    if (n > 0) { //iterate till n is not less than equal to 0
        cubes(n - 1);
        cout << n * n * n << ' ';
    }
    return 1;
}

int main() {
    int n = 5;
    cubes(5);
}
