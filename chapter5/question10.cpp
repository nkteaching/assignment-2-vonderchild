#include <iostream>

using namespace std;

float recursive(int n, int i, float d, float sum) {
    if (i < n) {
        if (i != 0 && i % 2 == 0) {
            recursive(n, i + 1, d + 1, sum - (1 / d));
        } else {
            recursive(n, i + 1, d + 1, sum + (1 / d));
        }
    } else return sum;
}

int main() {
    int n = 5;
    cout << recursive(n, 0, 1, 0);
}