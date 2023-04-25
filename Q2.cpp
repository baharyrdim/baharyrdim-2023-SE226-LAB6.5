#include <iostream>
#include <algorithm>
using namespace std;

bool isPalindrome(string s) {
    string rev_s = s;
    reverse(rev_s.begin(), rev_s.end());
    return s == rev_s;
}

int main() {
    string words[] = {"racecar", "hello", "level", "civic"};
    int n = sizeof(words) / sizeof(words[0]);
    for (int i = 0; i < n; i++) {
        if (isPalindrome(words[i])) {
            cout << words[i] << " ";
        }
    }
    return 0;
}
