#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int L;
long long hashing = 1234567891;
int main()
{
    string str;
    cin >> L;
    cin >> str;
    long long ans = 0;
    long long r = 1;
    for (int i = 0; i < L; i++)
    {
        ans = (ans + (str[i] - 96) * r) % hashing;
        r = (r * 31) % hashing;
    }
    cout << ans;
}