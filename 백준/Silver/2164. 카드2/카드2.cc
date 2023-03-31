#include <iostream>
#include <deque>
using namespace std;
int N;
int main()
{
    cin >> N;
    deque<int> dq;
    for (int i = 1; i <= N; i++)
    {
        dq.push_back(i);
    }
    if (N == 1)
    {
        cout << 1;
    }
    else
    {
        while (true)
        {
            dq.pop_front();
            int tmp = dq.front();
            int len = dq.size();
            if (len == 1)
            {
                cout << tmp;
                break;
            }
            else
            {
                dq.push_back(tmp);
                dq.pop_front();
            }
        }
    }
}