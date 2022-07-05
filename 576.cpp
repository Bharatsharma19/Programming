#include <iostream>
#include <vector>
using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)

const int N = 1e9;
vi a;

int solve(int i, int j)
{
    if (i == j)
    {
        return a[i];
    }
    if (i > j)
    {
        return 0;
    }

    int l = a[i] + min(solve(i + 2, j), solve(i + 1, j - 1));
    // A[i..j], rem coins = A[i+1..j]
    int r = a[j] + min(solve(i, j - 2), solve(i + 1, j - 1));
    // A[i..j], rem coins = A[i..j-1]

    return max(l, r);
}

int main()
{
    int n;
    cout << "Enter number of coins : ";
    cin >> n;

    a = vi(n);

    for (auto &i : a)
    {
        cout << "Enter Coin Value : ";
        cin >> i;
    }

    cout << solve(0, n - 1);

    return 0;
}
