#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int N;
int num[1001];
int dp[1001];
int main()
{
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> num[i];
    }
    dp[0] = 1;
    for (int i = 1; i < N; i++)
    {
        dp[i] = 1;
        for (int j = 0; j < i; j++)
        {
            if (num[i] > num[j])
            {
                dp[i] = max(dp[j] + 1, dp[i]);
            }
        }
    }
    vector<int> tmp;
    for (int i = 0; i < N; i++)
    {
        tmp.push_back(dp[i]);
    }
    cout << *max_element(tmp.begin(), tmp.end());
}