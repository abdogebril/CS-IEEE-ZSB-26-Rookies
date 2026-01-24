#include <bits/stdc++.h>
using namespace std;

int countDigitsBaseK(long long N, int K) {
    return (int)(floor(log(N) / log(K))) + 1;
}

int main() {
    long long N;
    int K;
    cin >> N >> K;
    cout << countDigitsBaseK(N, K) << endl;
    return 0;
}
