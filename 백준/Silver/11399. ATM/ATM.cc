#include <iostream>
#include <algorithm>
using namespace std;
int arr[1001];
int N;
int ans[1001];
int main()
{
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + N);
    int sum = 0;
    sum = arr[0];
    ans[0] = arr[0];
    for (int i = 1; i < N; i++)
    {
        sum = sum + arr[i];
        ans[i] = sum;
    }
    int res = 0;
    for (int i = 0; i < N; i++)
    {
        res = res + ans[i];
    }
    cout << res;
}