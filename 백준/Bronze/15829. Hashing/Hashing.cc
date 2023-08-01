#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int L;
int main()
{
    cin >> L;
    string str;
    cin >> str;
    int ans = 0;
    for (int i = 0; i < L; i++)
    {
        int tmp = int(str[i]) - 96;
        ans += tmp * pow(31, i);
    }
    cout << ans;
}