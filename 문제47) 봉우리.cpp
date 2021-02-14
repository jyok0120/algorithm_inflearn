#include <iostream>
#include <cstring>

using namespace std;

int N, ans = 0;
int board[55][55];

int dir_x[4] = {0,0,-1,1};
int dir_y[4] = {1,-1,0,0};

int main()
{
    cin >> N;

    memset(board, 0, sizeof(board));

    for(int i = 1 ; i <= N ; i++)
    {
        for(int j = 1 ; j <= N ; j++)
            cin >> board[i][j];
    }

    for(int i = 1 ; i <= N ; i++)
    {
        for(int j = 1; j <= N ; j++)
        {
            int cnt = 0;
            for(int k = 0; k < 4; k++)
            {
                int x = i + dir_x[k];
                int y = j + dir_y[k];
                if(board[i][j]> board[x][y])
                    cnt++;
            }
            if(cnt == 4)
                ans++;
        }
    }

    cout << ans;
}
