#include<iostream>
#include<sstream>

using namespace std;

void forward(string &s, int i, int j) { //function that puts comma and shifts by 1 all characters to right
    static char temp, temp1;
    if (j < s.length() - 1) {
        if (j == i) {
            temp = s[j];
            s[j] = ',';
        }
        temp1 = s[j + 1];
        s[j + 1] = temp;
        temp = temp1;
        forward(s, i, j + 1);
        if (j == s.length() - 2)
            s += temp; //lastly the size of the string is incremented by 1 and the last character stored in temp is added to the string
    }
}

string recursive(string &s, int count, int i) { //function that decides where to put the comma
    if (i >= 0) {
        if (count == 3 && i != 0) {
            forward(s, i, i); //function puts comma after every third iteration
            recursive(s, 1, i - 1);
        } else {
            recursive(s, count + 1, i - 1);
        }
    }
    return s;
}

int main() {
    long long n = 1802617493294677441;
    stringstream ss;
    ss << n;
    string s;
    ss >> s; //converting number to string
    s = recursive(s, 0, s.length());
    cout << s;
}
