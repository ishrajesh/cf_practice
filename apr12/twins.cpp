#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> vec(n, 0);
    int sum = 0;
    int bias = 0;
    int coins = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
        sum += vec[i];
    }
    sort(vec.begin(), vec.end(), greater<int>());

    // for (int i = 0; i < n; i++)
    //     cout << vec[i];
    while (bias <= (sum / 2) && coins < n)
    {
        bias += vec[coins];
        coins++;
    }
    cout << coins;
    return 0;
}