#include <iostream>
#include <algorithm>
using namespace std;

bool isAnagram(string word1, string word2) {
    sort(word1.begin(), word1.end());
    sort(word2.begin(), word2.end());
    return word1 == word2;
}
int main() {
    string word = "listen";
    string
word_list[] = {"enlists", "google", "inlets", "banana"};
int n = sizeof(word_list) / sizeof(word_list[0]);
for (int i = 0; i < n; i++) {
if (isAnagram(word, word_list[i])) {
cout << word_list[i] << " ";
}
}
return 0;
}
