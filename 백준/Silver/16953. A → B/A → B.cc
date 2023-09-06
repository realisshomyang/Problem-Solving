#include <iostream>
using namespace std;
int A, B;
int main()
{
    cin >> A >> B;
    int cnt = 1;
    while (B != A || B > A)
    {
        cnt++;
        if (B % 2 == 0)
        {
            B = B / 2;
        }
        else if (B == 1 || B == 0)
        {
            cnt = -1;
            break;
        }
        else if (B % 2 == 1)
        {
            if (B >= 3 && B <= 9)
            {
                cnt = -1;
                break;
            }
            else
            {
                if (B >= 20)
                {
                    B = B / 10;
                }
                else
                {
                    B = B - 10;
                }
            }
        }
    }
    cout << cnt;
}