#include<bits/stdc++.h>
#include<string>

using namespace std;

int palindrome(string s, int i, int j) {
    if (i == j)
        return 1;

    if (s[i] != s[j - 1]) {
        return 0;
    }
    if (j > i)
        return palindrome(s, i + 1, j - 1);
    return 1;
}


string replace(string str) {
    string newstring;
    for (char i : str) {
        if (i != ' ' && i != '\'' && i != ',' && i != '.') {
            newstring += i;
        }
    }

    return newstring;
}

int main() {
    string str1{"madam"};

    if (palindrome(str1, 0, str1.size()))
        cout << "String is a palindrome" << endl;
    else
        cout << "String is not a palindrome" << endl;


    string str2{"Madam, I'm Adam"};
    str2 = replace(str2);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);

    if (palindrome(str2, 0, str2.size()))
        cout << "String is a palindrome" << endl;
    else
        cout << "String is not a palindrome" << endl;

}