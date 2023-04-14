#include <iostream>
using namespace std;
int T;
int map[15][15];
int main()
{
    cin >> T;

    for (int i = 1; i <= 14; i++)
    {
        map[0][i] = i;
    }
    for (int i = 1; i <= 14; i++)
    {
        for (int j = 1; j <= 14; j++)
        {
            map[i][j] = map[i - 1][j] + map[i][j - 1];
        }
    }

    for (int i = 0; i < T; i++)
    {
        int a, b;
        cin >> a >> b;
        cout << map[a][b] << endl;
    }
}