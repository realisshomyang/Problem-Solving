#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int map[51][51];
int N, M;
int cnt = 1000;

int find(int x, int y)
{
    int flag = (x + y) % 2;
    int count = 0;
    int count2 = 0;

    for (int i = x; i < x + 8; i++)
    {
        for (int j = y; j < y + 8; j++)
        {
            int tmp = (i + j) % 2;
            if (tmp == flag && map[x][y] != map[i][j])
            {
                count++;
            }
            else if (tmp != flag && map[x][y] == map[i][j])
            {
                count++;
            }
        }
    }
    for (int i = x; i < x + 8; i++)
    {
        for (int j = y; j < y + 8; j++)
        {
            int tmp = (i + j) % 2;
            if (tmp != flag && map[x][y] != map[i][j])
            {
                count2++;
            }
            else if (tmp == flag && map[x][y] == map[i][j])
            {
                count2++;
            }
        }
    }
    return min(count, count2);
}

int main()
{
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        string str;
        cin >> str;
        for (int j = 0; j < M; j++)
        {
            map[i][j] = str[j] - '0';
        }
    }

    for (int i = 0; i <= N - 8; i++)
    {
        for (int j = 0; j <= M - 8; j++)
        {
            cnt = min(cnt, find(i, j));
        }
    }
    cout << cnt;
}