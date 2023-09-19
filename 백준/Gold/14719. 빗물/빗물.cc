#include <iostream>
using namespace std;
int arr[501];
int H, W;

int main()
{
    cin >> H >> W;
    for (int i = 0; i < W; i++)
    {
        cin >> arr[i];
    }
    int ans = 0;
    int cnt = 0;
    bool flag = false;
    int add = 0;
    for (int i = 1; i <= H; i++)
    {
        cnt = 0;
        flag = true;
        add = 0;
        for (int j = 0; j < W; j++)
        {
            if (arr[j] >= i)
            {
                if (flag == false)
                {
                    cnt++;
                    flag = true;
                }
                else if (flag == true)
                {
                    cnt = 1;
                    continue;
                }
            }
            else if (arr[j] < i)
            {
                if (flag == true)
                {
                    if (j == 0)
                    {
                        cnt = 0;
                        flag = false;
                    }
                    else
                    {
                        cnt = 1;
                        flag = false;
                        add++;
                    }
                }
                else if (flag == false)
                {
                    if (cnt == 0)
                    {
                        flag = false;
                    }
                    else
                    {
                        flag = false;
                        add++;
                    }
                }
            }

            if (cnt == 2)
            {
                cnt = 0;
                ans += add;
                add = 0;
                flag = true;
            }
        }
    }
    cout << ans;
}
