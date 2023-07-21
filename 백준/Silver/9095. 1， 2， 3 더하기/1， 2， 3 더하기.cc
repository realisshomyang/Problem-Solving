#include <iostream>
#include <cstring>
using namespace std;

int T;
int dp[12];

int main()
{
    cin >> T;
    memset(dp, 0, sizeof(dp));
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    for (int i = 4; i <= 11; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            dp[i] = dp[i] + dp[i - j];
        }
    }
    for (int i = 0; i < T; i++)
    {
        int n;
        cin >> n;
        cout << dp[n] << endl;
    }
}