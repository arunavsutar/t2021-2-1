#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> vec(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    unordered_map<int, int> um;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < 10; j++)
        {
            if (vec[i] % j == 0)
            {
                um[j] += 1;
            }
        }
    }
    for (int i = 1; i <= 9; i++)
    {
        cout << i << ":" << um[i] << endl;
    }
    return 0;
}