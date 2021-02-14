#include <iostream>
#include <cmath>

using namespace std;

int board[10][10];
int avg[10];

int main()
{
    float sum = 0;

    for(int i = 0 ; i < 9 ; i++)
    {
        for(int j = 0 ; j < 9 ; j++)
        {
            cin >> board[i][j];
            sum += board[i][j];
        }
        sum /= 9;
        avg[i] = round(sum);
        sum = 0;
    }

    for(int i = 0 ; i < 9 ; i++)
    {
        int check = board[i][0];
        for(int j = 1; j < 9 ; j++)
        {
            if(abs(avg[i] - check) > abs(avg[i] - board[i][j]))
            {
                check = board[i][j];
            }else if ( abs(avg[i] - check) == abs(avg[i] - board[i][j]))
            {
                check = check < board[i][j] ? board[i][j] : check;
            }
        }
        cout << avg[i] << " " << check << endl;
    }


}
