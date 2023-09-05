#include <iostream>
using namespace std;
int dp[31][31];
int main()
{
    int T;
    int n, m;
    cin >> T;

    for (int i = 1; i <= 30; i++)
    {
        dp[1][i] = i;
    }
    for (int i = 2; i <= 30; i++)
    {
        for (int j = 2; j <= 30; j++)
        {
            if (i == j)
            {
                dp[i][j] = 1;
            }
            if (i < j)
            {
                dp[i][j] = dp[i][j - 1] + dp[i - 1][j - 1];
            }
        }
    }

    for (int i = 0; i < T; i++)
    {
        cin >> n >> m;
        cout << dp[n][m] << "\n";
    }
}