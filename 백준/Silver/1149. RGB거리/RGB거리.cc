#include <iostream>
#include <algorithm>
using namespace std;
int N;
int arr[1000][3];
int dp[1000][3];
int main()
{
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
            if (i != 0 || i != 1)
            {
                dp[i][j] = 1000000;
            }
            else
            {
                dp[i][j] = arr[i][j];
            }
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                if (k == j)
                {
                    continue;
                }
                else
                {
                    dp[i][j] = min(dp[i][j], dp[i - 1][k] + arr[i][j]);
                }
            }
        }
    }
    int ans = 10000000;
    for (int i = 0; i < 3; i++)
    {
        ans = min(ans, dp[N - 1][i]);
    }
    cout << ans;
}