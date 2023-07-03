#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int T, N, M;
int dp[10001];
int coin[21];
int main()
{
    cin >> T;
    for (int t = 0; t < T; t++)
    {
        cin >> N;
        for (int i = 0; i < N; i++)
        {
            cin >> coin[i];
        }
        cin >> M;
        dp[0] = 1;
        for (int i = 0; i < N; i++)
        {
            for (int j = coin[i]; j <= M; j++)
            {
                dp[j] = dp[j - coin[i]] + dp[j];
            }
        }
        cout << dp[M] << "\n";
        memset(dp, 0, sizeof(dp));
        memset(coin, 0, sizeof(coin));
    }
}