#include <iostream>
using namespace std;

int attacks(int H, int A) {
    int count = 0;
    while (H > 0) {
        H -= A;
        count++;
    }
    return count;
}

int main() {
    int H, A;
    cin >> H >> A;

    cout << attacks(H, A);
}
