#include <iostream>
#include <cctype>
#include<string>
using namespace std;

int main() {
    string sentence;
    getline(cin,sentence);
    for (int i = 0; i < sentence.length(); i++) {
        if (i % 2 == 1) {
            cout << (char)toupper(sentence[i]);
        } else if (i % 2 == 0) {
            cout << (char)tolower(sentence[i]);
        }
    }
}