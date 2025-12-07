#include <iostream>
using namespace std;

int main() {
    int k, r;
    cin >> k ; // «бЏѕѕ
    cin >> r ;// «б—ёг «б«ќн— »Џѕ «б÷—» «д« «б »ѕќбе

    for (int x = 1; x <= 10; x++) {
        int cost = x * k;
        if (cost % 10 == 0 || cost % 10 == r) {
            cout << x;
            return 0;
        }
    }

    return 0;
}


