#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> strings = {"aa", "ab", "aa", "b", "cc", "aa"};

    sort(strings.begin(), strings.end());

    // Time Complexity : O(nmlog(n))

    int distinct = 0;

    for (int i = 0; i < strings.size(); i++)
    {
        if (i == 0 or strings[i] != strings[i - 1])
        {
            distinct++;
        }
    }

    cout << distinct << "\n";

    return 0;
}
