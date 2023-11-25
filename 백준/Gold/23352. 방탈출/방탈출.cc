#include <iostream>
#include <queue>

using namespace std;
int N, M;
int arr[51][51];
int visited[51][51];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
int len;
int ans;

/*
탐색을 막 하다가
current len이 답 len보다 크고
1. len이 가장 큰게 우선임!!!!!
    -> len이 커지면 계속 갱신할 것
    이 때
시작 + 현재 위치가 답보다 크면 저장 후
*/
void bfs(int a, int b)
{
    queue<pair<int, int>> q;
    q.push(make_pair(a, b));
    visited[a][b] = 1;
    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        if (visited[x][y] == len)
        {
            len = visited[x][y];
            ans = max(ans, arr[a][b] + arr[x][y]);
        }
        if (visited[x][y] > len)
        {
            len = visited[x][y];
            ans = arr[a][b] + arr[x][y];
        }

        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx < 0 || nx >= N || ny < 0 || ny >= M)
            {
                continue;
            }
            if (arr[nx][ny] != 0)
            {
                if (visited[nx][ny] == 0)
                {
                    visited[nx][ny] = visited[x][y] + 1;
                    q.push(make_pair(nx, ny));
                }
            }
        }
    }
}

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
            if (arr[i][j] == 0)
            {
                continue;
            }
            else
            {
                bfs(i, j);
                for (int i = 0; i < N; i++)
                {
                    for (int j = 0; j < M; j++)
                    {
                        visited[i][j] = 0;
                    }
                }
            }
        }
    }
    cout << ans;
}