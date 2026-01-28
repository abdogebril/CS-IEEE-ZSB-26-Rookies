#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int cnt = 0;


    for (int i = 1; i < s.size(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z')
            cnt++;
    }

    if (cnt == s.size() - 1) {

        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 'a' && s[i] <= 'z')
                s[i] = s[i] - 'a' + 'A';
            else
                s[i] = s[i] - 'A' + 'a';
        }
    }

    cout << s;
    return 0;
}

