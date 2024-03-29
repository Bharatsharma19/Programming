#include <iostream>
using namespace std;

const int MOD = 1e9 + 7;

int power(int a, int n)
{
    if (n == 0)
    {
        return 1;
    }

    int p = (power(a, n / 2) % MOD);

    if (n & 1)
    {
        return ((((p * p) % MOD) * a) % MOD);
    }
    else
    {
        return (p * p) % MOD;
    }
}

int main()
{
    int a, n;
    cout << "Enter Base : ";
    cin >> a;
    cout << "Enter Power : ";
    cin >> n;

    a %= MOD;

    cout << power(a, n) << endl;

    return 0;
}
