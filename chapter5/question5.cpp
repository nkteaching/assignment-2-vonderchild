#include<iostream>

using namespace std;

//(a)   //between 1 and n means excluding 1 and n
int odd_a(int i, int n) { //initially i is 3 and hence the function prints odd numbers starting from 3 to n-1
    if (i >= n)
        return 0;
    else {
        cout << i << " ";
        return odd_a(i + 2, n); //i is being incremented by 2
    }

}

//(b)
int odd_b(int i, int n) {
    if (n % 2 == 0) //if n is even
        return odd_b(i, n - 1); //decrease it by 1 so it becomes odd
    if (n < 3) //continue till n is less than 3
        return 0;
    else {
        cout << n << " ";
        return odd_b(i, n - 2); //n is being decremented by 2
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
