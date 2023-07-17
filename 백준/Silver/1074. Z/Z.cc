#include <iostream>
#include <cmath>
using namespace std;

int N, r, c;

int ans;

void dq(int x, int y, int n)
{

    if (x == r && y == c)
    {
        cout << ans << endl;
        return;
    }
    if (r < x + n && c < y + n && r >= x && c >= y)
    {
        for (int i = x; i < x + n; i += n / 2)
        {
            for (int j = y; j < y + n; j += n / 2)
            {
                dq(i, j, n / 2);
            }
        }
    }
    else
    {
        ans += n * n;
    }
}

int main()
{
    cin >> N >> r >> c;
    int num = pow(2, N);
    dq(0, 0, num);
}