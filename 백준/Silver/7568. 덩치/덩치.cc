#include <iostream>
using namespace std;
int arr[51][2];
int N;
int main()
{
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i][0] >> arr[i][1];
    }
    int rank = 1;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (arr[i][0] < arr[j][0] && arr[i][1] < arr[j][1])
            {
                rank++;
            }
        }
        cout << rank << " ";
        rank = 1;
    }
}