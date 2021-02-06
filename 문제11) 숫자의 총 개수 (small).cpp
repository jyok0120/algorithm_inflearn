#include <iostream>

using namespace std;

int main()
{

    int N, cnt =0;
    cin >> N;

    for(int i = 1; i <= N ;i++)
    {
        int tmp = i;
        while(tmp)
        {
            tmp /= 10;
            cnt++;
        }
    }
    cout <<cnt;
}


