#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int num[N];

    for(int i = 0 ; i < N ; i++)
    {
        cin >> num[i];
    }

    for(int i = 0 ; i < N ; i++)
    {
        int Min = num[i], index = i;
        for(int j = i + 1 ; j < N; j++)
        {
            if( Min > num[j])
            {
                Min = num[j];
                index = j;
            }
        }

        int tmp = num[index];
        num[index] = num[i];
        num[i] = tmp;
    }

    int cnt = 0, i;
    for(i = N-1 ; i >= 0 ; i--)
    {
        if(num[i] != num[i-1])
        {
            cnt++;

        }
        if(cnt == 3) break;
    }

    cout << num[i];



}



