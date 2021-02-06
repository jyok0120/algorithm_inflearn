#include <iostream>

using namespace std;

int main()
{

    int N;
    cin >> N;

    int ppl[N];

    for(int i = 0 ; i < N ; i++)
        cin >> ppl[i];

    int cnt = 0;
    for(int i = 0 ; i < N ; i++)
    {
        int j;
        for(j = i+1; j < N ; j++)
        {
            if(ppl[i] <= ppl[j])
                break;
        }
        if(j == N && i != N-1)
            cnt++;
    }

    cout << cnt;
}



