#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
long long N, M;
long long sum;
vector<int> vec;
int ans;

int main()
{
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        vec.push_back(a);
    }
    sort(vec.begin(), vec.end());

    int left = 0;
    int right = *max_element(vec.begin(), vec.end());
    int height;

    while (left <= right)
    {
        sum = 0;
        height = (left + right) / 2;
        for (int i = 0; i < N; i++)
        {
            if (vec[i] > height)
            {
                sum += (vec[i] - height);
            }
        }
        if (sum >= M)
        {
            left = height + 1;
        }
        else
        {
            right = height - 1;
        }
    }

    cout << right;
}