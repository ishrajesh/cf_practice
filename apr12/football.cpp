#include <bits/stdc++.h>
using namespace std;

int main()
{
    string input;
    cin >> input;
    int zero = 0, one = 0;
    for (int i = 1; i < input.size(); i++)
    {

        if (input[i] == '1' && input[i - 1] == '1')
            one++;
        else if (input[i] == '0' && input[i - 1] == '0')
            zero++;
        else
        {
            one = 0;
            zero = 0;
        }
        if (zero >= 6 || one >= 6)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}