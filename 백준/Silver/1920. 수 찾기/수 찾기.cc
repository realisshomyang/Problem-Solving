#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> arr;
int N, M;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    sort(arr.begin(), arr.end());

    cin >> M;
    int tmp;
    for (int i = 1; i <= M; i++)
    {
        cin >> tmp;
        if (binary_search(arr.begin(), arr.end(), tmp))
            cout << 1 << "\n";
        else
            cout << 0 << "\n";
    }
}