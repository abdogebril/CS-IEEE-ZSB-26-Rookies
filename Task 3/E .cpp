#include <bits/stdc++.h>
using namespace std;

string lexSmaller(int a, int b) {
    string s1(b, '0' + a);
    string s2(a, '0' + b);
    return min(s1, s2);
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << lexSmaller(a, b) << endl;
    return 0;
}
