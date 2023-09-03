#include <iostream>
#include <algorithm>
using namespace std;
int N, M, B;
int arr[501][501];
int main()
{
    cin >> N >> M >> B;
    int time = 2147000000;
    int height = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int k = 0; k <= 256; k++)
    {
        int sum = 0, tmp = B;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                if (arr[i][j] < k)
                {
                    sum += k - arr[i][j];
                    tmp -= k - arr[i][j];
                }
                else if (arr[i][j] > k)
                {
                    sum += (arr[i][j] - k) * 2;
                    tmp += arr[i][j] - k;
                }
                else
                {
                    continue;
                }
            }
        }
        if (tmp >= 0)
        {
            if (sum <= time)
            {
                time = sum;
                height = k;
            }
        }
    }
    cout << time << " " << height;
}