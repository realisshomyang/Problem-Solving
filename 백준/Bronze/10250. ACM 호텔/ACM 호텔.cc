#include <iostream>
#include <cstring>
using namespace std;
int T, H, W, N;
int main()
{
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        cin >> H >> W >> N;
        int cnt = 0;
        for (int j = 0; j < W; j++)
        {
            for (int k = 0; k < H; k++)
            {
                cnt++;
                if (cnt == N)
                {
                    cout << (k + 1) * 100 + (j + 1) << endl;
                    break;
                }
            }
        }
    }
}