#include<iostream>
#include<sstream>

using namespace std;

void forward(string &s, int i) {
    char temp = 0, temp1 = 0;
    for (int j = i; j < s.length() - 1; j++) {
        if (j == i) {
            temp = s[j];
            s[j] = ',';
        }

        temp1 = s[j + 1];
        s[j + 1] = temp;
        temp = temp1;
    }
    s += temp;
}

string recursive(string &s, int count, int i) {
    if (i >= 0) {
        if (count == 3 && i != 0) {
            forward(s, i);
            recursive(s, 1, i-1);
        } else {
            recursive(s, count + 1, i-1);
        }
    }
    return s;
}

int main() {
    long long n = 1802617493294677441;
    stringstream ss;
    ss << n;
    string s;
    ss >> s;
    s = recursive(s, 0, s.length());
    cout << s;
}