#include <bits/stdc++.h>
using namespace std;

void generate(string &s, int l, set<string> &res) {
    if(l == s.size()) {
        res.insert(s);
        return;
    }
    for(int i = l; i < s.size(); i++) {
        swap(s[l], s[i]);
        generate(s, l+1, res);
        swap(s[l], s[i]);
    }
}

int main() {
    string s;
    cin >> s;

    set<string> res;
    generate(s, 0, res);

    cout << res.size() << "\n";
    for(auto str : res) {
        cout << str << "\n";
    }

    return 0;
}
