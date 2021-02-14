#include <iostream>

using namespace std;

int W, H, x, y;

int board[51][51];

int sum(int i, int j)
{
    int ret = 0;

    for(int l = i ; l < i + y ; l++)
    {
        for(int k = j; k < j + x ; k++ )
        {
            ret += board[l][k];
        }
    }

    return ret;
}

int main()
{
    cin >> H >> W;

    for(int i= 0 ; i < H ; i++)
    {
        for(int j = 0 ; j < W ; j++)
        {
            cin >> board[i][j];
        }
    }

    cin >> y >> x;

    int maxx = 0;

    for(int i = 0 ; i <= H - y; i++)
    {
        for(int j = 0 ; j <= W - x ; j++)
        {
            int org = sum(i,j);
            if(maxx < org)
            {
                maxx = org;
            }
        }
    }

    cout << maxx;

}
