#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int problems = 0;

    for (int i = 0; i < n; i++)
    {
        int Petya, Vasya, Tonya;
        cin >> Petya >> Vasya >> Tonya;

        if ((Petya == 0 || Petya == 1) && (Vasya == 0 || Vasya == 1) && (Tonya == 0 || Tonya == 1))
        {
            int sum = Petya + Vasya + Tonya;
            if (sum >= 2)
            {
                problems++;
            }
        }
        else
        {
            cout << "Invalid input" << endl;
        }
    }

    cout << problems << endl;

return 0;
}
