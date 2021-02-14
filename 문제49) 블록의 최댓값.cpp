#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int board[N+1][N+1];

    memset(board, 0, sizeof(board));

    int a[N];
    int b[N];

    for(int i = 0 ; i < N ; i++)
        cin >> a[i];
    for(int j = 0 ; j < N ; j++)
        cin >> b[j];

    for(int i = N-1 ; i >= 0 ; i--)
    {
        int maxx = b[i];
        for(int j = 0 ; j < N ; j++)
        {
            if(maxx < a[j])
            {
                board[N-1 - i][j] = maxx;
            }
            else board[N-1-i][j] = a[j];
        }
    }

    int sum = 0;
    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < N ;j++)
        {
            sum += board[i][j];
        }
    }

    cout << sum;
}
