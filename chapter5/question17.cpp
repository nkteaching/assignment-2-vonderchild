#include<iostream>

using namespace std;

bool check(string str, char c, int i, int end) {
    if (i < end) {
        if (str[i] == c)
            return true;
        else
            return check(str, c, i + 1, end);
    } else {
        return false;
    }
}

int count(string str, char c, int i, int end, int countt) {
    if (i < end) {
        if (str[i] == c)
            return count(str, c, i + 1, end, countt + 1);
        else
            return count(str, c, i + 1, end, countt);
    }
    return countt;
}

void remove(string &s, char c) {
    static int i = 0, j = 0;

    if (s[i]) {
        s[i] = s[i + j];

        if (s[i] == c) {
            j++;
            i--;
        }
        i++;
        remove(s, c);
    }
}

int main() {
    string str{"Hello world"};
    char c = 'l';
    cout << check(str, c, 0, str.length()) << endl;
    cout << count(str, c, 0, str.length(), 0) << endl;
    remove(str, c);
    cout << str;
}