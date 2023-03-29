#include <iostream>
using namespace std;
int N, K;

int bionomial(int n, int k)
{
    if (n == k || k == 0)
    {
        return 1;
    }
    else
    {
        return bionomial(n - 1, k - 1) + bionomial(n - 1, k);
    }
}

int main()
{
    cin >> N >> K;
    cout << bionomial(N, K);
}