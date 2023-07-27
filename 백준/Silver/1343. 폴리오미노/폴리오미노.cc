#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    cin >> input;
    int cnt = 0;
    int start = 0;
    int flag = 1;
    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] == '.' || i == input.size() - 1)
        {
            if (input[i] == 'X')
            {
                cnt++;
            }
            if (cnt % 4 == 0)
            {
                for (int j = start; j < start + cnt; j++)
                {
                    input[j] = 'A';
                }
                start = start + cnt + 1;
                cnt = 0;
            }
            else if (cnt % 2 == 0)
            {
                for (int j = start; j < start + cnt - 2; j++)
                {
                    input[j] = 'A';
                }
                input[start + cnt - 2] = 'B';
                input[start + cnt - 1] = 'B';
                start = start + cnt + 1;
                cnt = 0;
            }
            else
            {
                flag = 0;
            }
        }
        else if (input[i] == 'X')
        {
            cnt++;
        }
    }
    if (flag == 1)
    {
        cout << input;
    }
    else
    {
        cout << -1;
    }
}