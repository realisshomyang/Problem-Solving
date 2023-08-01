#include <iostream>
using namespace std;

int N, M;
bool visited[9];
int arr[9];
void backtrack(int depth, int start)
{
    if (depth == M)
    {
        for (int i = 0; i < M; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;

        return;
    }
    for (int i = start; i <= N; i++)
    {
        if (!visited[i])
        {
            visited[i] = true;
            arr[depth] = i;
            backtrack(depth + 1, i + 1);
            visited[i] = false;
        }
        else
        {
            return;
        }
    }
}

int main()
{
    cin >> N >> M;
    backtrack(0, 1);
}