#include <bits/stdc++.h>
using namespace std;

long long ReadPositive()
{
    long long N;
    cin >> N;
    while(N <= 0)
    {
        cout << "please enter a positive number: ";
        cin >> N;
    }
    return N;
}

long long serial(long long n)
{
    cout << n << " ";
    if(n == 1) return 1;

    long long x;
    if(n % 2 == 0)
        x = n / 2;
    else
        x = 3 * n + 1;

    return serial(x);
}

int main()
{
    long long N = ReadPositive();
    serial(N);
    return 0;
}
