#include <iostream>

using namespace std;
//considering that the stack doesnt overflow and the function runs correctly this is the shortest recursive function i could think of that uses only one variable n
int shortest(int n) { // the function iterates n-1 times
    if (n > 0) {
        return shortest(n-1);
        cout << n << " "; //prints 1 to n
    }
}

int main() {
    cout << shortest(3);
}
