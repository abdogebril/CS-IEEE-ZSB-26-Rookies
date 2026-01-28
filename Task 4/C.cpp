#include <iostream>
using namespace std;

int n;
long long a[21];

long long diff(long long x) {
    if (x < 0) return -x;
    return x;
}

long long solve(int i, long long s1, long long s2) {
    if (i == n)
        return diff(s1 - s2);

    long long take1 = solve(i + 1, s1 + a[i], s2);
    long long take2 = solve(i + 1, s1, s2 + a[i]);

    if (take1 < take2)
    return take1;
    else
    return take2;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << solve(0, 0, 0);
    return 0;
}

