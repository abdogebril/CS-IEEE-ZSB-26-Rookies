#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int freq[26] = {0};

    for (int i = 0; i < n; i++) {
        char c = s[i];

        if (c >= 'A' && c <= 'Z') {
            freq[c - 'A'] = 1;
        }
        else if (c >= 'a' && c <= 'z') {
            freq[c - 'a'] = 1;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] == 0) {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}




