#include <iostream>
using namespace std;
long long dpz[41];
long long dpo[41];
int T;
int main()
{
    dpz[0] = 1;
    dpo[0] = 0;
    dpz[1] = 0;
    dpo[1] = 1;

    for (int i = 2; i <= 40; i++)
    {
        dpz[i] = dpz[i - 1] + dpz[i - 2];
        dpo[i] = dpo[i - 1] + dpo[i - 2];
    }

    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int tmp;
        cin >> tmp;
        cout << dpz[tmp] << " " << dpo[tmp] << endl;
    }
}