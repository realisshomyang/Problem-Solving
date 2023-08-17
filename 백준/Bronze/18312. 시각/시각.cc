#include <iostream>
using namespace std;

int main()
{
    int N, K, cnt = 0;

    cin >> N >> K;

    for (int i = 0; i <= N; i++)
    {
        for (int j = 0; j <= 59; j++)
        {
            for (int k = 0; k <= 59; k++)
            {
                if ((int(i / 10) == K) || ((i % 10) == K) || (int(j / 10) == K) || ((j % 10) == K) || (int(k / 10) == K) || ((k % 10) == K))
                {
                    cnt++;
                }
            }
        }
    }
    cout << cnt;
}