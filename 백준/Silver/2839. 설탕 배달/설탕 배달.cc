#include <iostream>
using namespace std;
int dp[5001];
int cnt;

int main()
{
    int n;
    cin >> n;

    while (n > 0)
    {

        if (n % 5 == 0)
        {
            int tmp;
            tmp = n / 5;
            cnt = tmp + cnt;
            break;
        }
        else if (n % 3 == 0)
        {
            if (n > 15)
            {
                n = n - 3;
                cnt++;
            }
            else
            {
                int tmp;
                tmp = n / 3;
                cnt = tmp + cnt;
                break;
            }
        }
        else if (n % 3 != 0 && n % 5 != 0)
        {
            if (n > 0)
            {
                n = n - 3;
                if (n < 0)
                {
                    cnt = -1;
                }
                else
                {
                    cnt++;
                }
            }
        }
    }
    cout << cnt;
}