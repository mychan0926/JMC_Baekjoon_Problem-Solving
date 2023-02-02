#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
int c, d;
int recursion(const char* s, int l, int r) {
    c++;
    if (l >= r) return 1;
    else if (s[l] != s[r]) return 0;
    else return recursion(s, l + 1, r - 1);
}

int isPalindrome(const char* s) {
    return recursion(s, 0, strlen(s) - 1);
}

int main() {
    int G;
    cin >> G;
    for (int i = 0; i < G; i++)
    {
        char s[1001];
        c = 0;
        cin >> s;
        cout << isPalindrome(s)<<" " << c << "\n";
    }
}