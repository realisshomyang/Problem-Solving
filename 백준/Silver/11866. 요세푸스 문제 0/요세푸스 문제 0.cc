#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int N, K;
queue<int> q;
vector<int> ans;

int main()
{
    cin >> N >> K;
    for (int i = 1; i <= N; i++)
    {
        q.push(i);
    }
    int cnt = 0;

    while (!(q.empty()))
    {
        int tmp = q.front();
        q.pop();
        cnt++;
        if (cnt == K)
        {
            ans.push_back(tmp);
            cnt = 0;
        }
        else
        {
            q.push(tmp);
        }
    }
    cout << "<";

    for (int i = 0; i < ans.size() - 1; i++)
    {
        cout << ans[i] << ", ";
    }
    cout << ans[ans.size() - 1] << ">";
}