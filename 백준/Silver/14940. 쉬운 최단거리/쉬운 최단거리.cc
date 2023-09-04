#include <iostream>
#include <queue>
using namespace std;
int arr[1001][1001];
int visited[1001][1001];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
int N, M;
int cnt;
queue<pair<int, pair<int, int>>> q;

int main()
{
    pair<int, pair<int, int>> start;
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 2)
            {
                start = make_pair(0, make_pair(i, j));
            }
        }
    }
    q.push(start);
    arr[start.second.first][start.second.second] = 0;
    while (!q.empty())
    {
        cnt++;
        pair<int, pair<int, int>> cur;
        cur = q.front();
        q.pop();
        int nx, ny;
        for (int i = 0; i < 4; i++)
        {
            nx = cur.second.first + dx[i];
            ny = cur.second.second + dy[i];
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
                arr[nx][ny] = cur.first + 1;
                visited[nx][ny] = true;
                q.push(make_pair(cur.first + 1, make_pair(nx, ny)));
            }
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (!visited[i][j] && arr[i][j] == 1)
            {
                cout << -1 << " ";
            }
            else
            {
                cout << arr[i][j] << " ";
            }
        }
        cout << "\n";
    }
}