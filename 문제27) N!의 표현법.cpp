#include <iostream>

using namespace std;

int prime[1001];

void calcPrime(int N)
{
    int cnt = 0;
    for(int i = 2 ; i <= N ; i++)
    {
        int j;
        for(j = 2; j <i ; j++)
            if(i % j == 0) break;
        if(j == i) prime[cnt++] = i;
    }

}

int main()
{

    int N;
    cin >> N;

    calcPrime(N);

    int ans[1001] = {0,};

    int idx = 0;

    int num = N;

    while(N > 1)
    {
        int M = N;
        while(M != 1)
        {
            if(M % prime[idx] == 0)
            {
                M /= prime[idx];
                ans[idx]++;
            }
            else
            {
                idx++;
            }
        }
        N--;
        idx = 0;
    }

    cout << num << "!" << " = ";

    for(int i = 0 ; i < num; i++)
        if(ans[i] > 0) cout << ans[i] << " ";


}



