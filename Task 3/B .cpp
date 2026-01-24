#include <bits/stdc++.h>
using namespace std;


double calculateBalance(int X, double Y) {

    if (X % 5 == 0 && X + 0.50 <= Y) {
        return Y - X - 0.50;
    }
    return Y;
}

int main() {
    int X;
    double Y;
    cin >> X >> Y;

    double newBalance = calculateBalance(X, Y);

    cout << fixed << setprecision(2) << newBalance << endl;

    return 0;
}
