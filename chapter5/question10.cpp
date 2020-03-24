#include <iostream>

using namespace std;

float recursive(int n, int i, float d, float sum) {
    if (i < n) {
        if (i != 0 && i % 2 == 0) { //if i is not 0 and i is an even number then subtract 1/d from sum
            recursive(n, i + 1, d + 1, sum - (1 / d));
        } else { //if i is 0 or an odd number add 1/d to sum
            recursive(n, i + 1, d + 1, sum + (1 / d));
        }
    } else return sum; //return sum
}

int main() {
    int n = 5;
    cout << recursive(n, 0, 1, 0);
}
