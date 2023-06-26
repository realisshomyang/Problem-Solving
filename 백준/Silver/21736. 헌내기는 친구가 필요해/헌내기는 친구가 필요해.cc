#include <iostream>
#include <string.h>

using namespace std;
int N, M;
char map[601][601];
int visisted[601][601];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
int cnt;

void dfs(int x, int y)
{
    visisted[x][y] = true;
    int nx, ny;
    for (int i = 0; i < 4; i++)
    {
        nx = x + dx[i];
        ny = y + dy[i];
        if (nx < 0 || nx >= N || ny < 0 || ny >= M)
        {
            continue;
        }
        if (map[nx][ny] == 'X')
        {
            continue;
        }
        if (!visisted[nx][ny])
        {
            visisted[nx][ny] = true;
            if (map[nx][ny] == 'P')
            {
                cnt++;
            }
            dfs(nx, ny);
        }
    }
}
int main()
{
    int sx, sy;
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        string tmp;
        cin >> tmp;
        for (int j = 0; j < M; j++)
        {
            map[i][j] = tmp[j];
            if (map[i][j] == 'I')
            {
                sx = i;
                sy = j;
            }
        }
    }
    dfs(sx, sy);

    if (cnt == 0)
    {
        cout << "TT" << endl;
    }
    else
    {
        cout << cnt << endl;
    }
}
