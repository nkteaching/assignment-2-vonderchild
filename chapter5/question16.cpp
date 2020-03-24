#include<bits/stdc++.h>
#include<string>

using namespace std;

//palindrome function remains same for both a and b

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

//(b) function to remove extra spaces, commas etc
string replace(string str) {
    string newstring;
    for (char i : str) {
        if (i != ' ' && i != '\'' && i != ',' && i != '.') {
            newstring += i; //if i is not blank space, comma or an apostrophe then add i to the newstring
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

    //(b)
    string str2{"Madam, I'm Adam"};
    str2 = replace(str2); // removes extra characters such as blank spaces, apostrophe, commas etc
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower); // converts string to lower case

    if (palindrome(str2, 0, str2.size()))
        cout << "String is a palindrome" << endl;
    else
        cout << "String is not a palindrome" << endl;

}
