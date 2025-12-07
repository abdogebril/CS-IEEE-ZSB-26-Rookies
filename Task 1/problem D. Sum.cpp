#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    const char s[] = "codeforces";
    for (int i = 0; i < t; i++) {
        char c;
        cin >> c;
        int j = 0;
        while (s[j] != '\0') {
            if (s[j] == c) {
                cout << "YES\n";
                break;
            }
            j++;
        }
        if (s[j] == '\0') {
            cout << "NO\n";
        }
    }
    return 0;
}
