#include <iostream>
#include <queue>

using namespace std;

int T;
int N, M;

int main()
{
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> N >> M;
        priority_queue<pair<int, int>> pq;
        queue<pair<int, int>> q;
        for (int j = 0; j < N; j++)
        {
            int a;
            cin >> a;
            pair<int, int> tmp = make_pair(a, j);
            pq.push(tmp);
            q.push(tmp);
        }
        int cnt = 0;
        while (!(q.empty()))
        {
            pair<int, int> tmp = pq.top();
            pair<int, int> qmp = q.front();
            q.pop();
            if (tmp.first == qmp.first)
            {
                pq.pop();
                cnt++;
                if (qmp.second == M)
                {
                    cout << cnt << endl;
                    break;
                }
            }
            else
            {
                q.push(qmp);
            }
        }
    }
}
