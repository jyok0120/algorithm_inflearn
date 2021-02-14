#include <iostream>
#include <vector>

using namespace std;

int N, K;


int main()
{
    cin >> N;

    vector<int> v(N+1);

    for(int i =1 ; i <= N ; i++)
        cin >> v[i];

    cin >> K;

    int time = 0, indx = 0;

    while(1)
    {
        time++;
        indx++;

        if(indx > N) indx = 1;

        while(v[indx] == 0)
        {
            indx++;
            if(indx > N) indx = 1;
        }

        v[indx]--;

        if(time == K )
        {
            indx++;
            if(indx > N) indx = 1;

            int cnt = 0;
            while(v[indx] == 0)
            {
                indx++;
                cnt++;
                if(indx > N) indx = 1;
                if(cnt == N)
                {
                    cout << -1;
                    return 0;
                }
            }
            cout << indx;
            break;

        }

    }
}
