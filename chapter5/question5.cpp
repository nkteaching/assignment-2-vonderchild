#include<iostream>

using namespace std;

//(a)
int odd_a(int i, int n) {
    if (i >= n)
        return 0;
    else {
        cout << i << " ";
        return odd_a(i + 2, n);
    }

}

//(b)
int odd_b(int i, int n) {
    if (n % 2 == 0)
        return odd_b(i, n - 1);
    if (n < 3)
        return 0;
    else {
        cout << n << " ";
        return odd_b(i, n - 2);
    }
}

int main() {
    int n;
    cin >> n;

    cout << "Odd numbers between 1 and n: ";
    odd_a(3, n);
    cout << endl;

    cout << "Odd numbers between n and 1: ";
    odd_b(3, n);
    cout << endl;

    return 0;
}