#include <iostream>
#include <algorithm>
using namespace std;
int arr[10001];
int K, N;
long long high, low, mid, ans;
int main()
{
    cin >> K >> N;
    for (int i = 0; i < K; i++)
    {
        cin >> arr[i];
    }
    low = 1;
    high = *max_element(arr, arr + K);
    ans = 0;
    while (low <= high)
    {
        mid = (low + high) / 2;
        int cnt = 0;
        for (int i = 0; i < K; i++)
        {
            cnt += arr[i] / mid;
        }
        if (cnt >= N)
        {
            low = mid + 1;
            ans = max(ans, mid);
        }
        else
        {
            high = mid - 1;
        }
    }
    cout << ans << "\n";
}