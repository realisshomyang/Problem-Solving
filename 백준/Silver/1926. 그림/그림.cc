#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int N, M;
int arr[501][501];
bool visited[501][501];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
int cnt, ans;
queue<pair<int, int>> q;
int main()
{
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (arr[i][j] == 1 && visited[i][j] == false)
            {
                visited[i][j] = true;
                q.push(make_pair(i, j));
                int tmp = 0;
                while (!(q.empty()))
                {
                    pair<int, int> cur = q.front();
                    q.pop();
                    tmp++;
                    int nx, ny;
                    for (int k = 0; k < 4; k++)
                    {
                        nx = cur.first + dx[k];
                        ny = cur.second + dy[k];
                        if (nx < 0 || ny < 0 || nx >= N || ny >= M)
                        {
                            continue;
                        }
                        if (arr[nx][ny] == 0)
                        {
                            continue;
                        }
                        if (!visited[nx][ny])
                        {
                            visited[nx][ny] = true;
                            q.push(make_pair(nx, ny));
                        }
                    }
                }
                ans = max(tmp, ans);
                cnt++;
            }
        }
    }
    cout << cnt << "\n";
    cout << ans;
}