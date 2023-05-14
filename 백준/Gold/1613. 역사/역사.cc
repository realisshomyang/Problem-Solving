#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> graph[401];
int N, K, S;
int dp[401][401];
const int INF = 987654321;
void fw()
{
    for (int k = 1; k <= N; k++)
    {
        for (int i = 1; i <= N; i++)
        {
            for (int j = 1; j <= N; j++)
            {
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
            }
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N >> K;
    for (int i = 0; i <= N; i++)
    {
        for (int j = 0; j <= N; j++)
        {
            dp[i][j] = INF;
        }
    }
    for (int i = 1; i <= N; i++)
    {
        dp[i][i] = 0;
    }
    for (int i = 0; i < K; i++)
    {
        int to, from;
        cin >> from >> to;
        dp[from][to] = 1;
        dp[to][from] = INF;
    }
    cin >> S;
    fw();
    for (int i = 0; i < S; i++)
    {
        int to, from;
        cin >> to >> from;
        if (dp[to][from] == INF)
        {
            if (dp[from][to] == INF)
            {
                cout << "0\n";
            }
            else
            {
                cout << "1\n";
            }
        }
        else
        {
            cout << "-1\n";
        }
    }
}