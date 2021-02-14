#include <iostream>
#include <vector>

using namespace std;

int N, K;


int main()
{
    cin >> N >> K;

    vector <int> v(N+1);

    int ind= 0, cnt=0, del = 0;

    while(1)
    {
       ind++;
       if(ind > N) ind = 1; // 순환
       if(v[ind] == 0)
       {
           // not deleted
           cnt++;
           if(cnt == K)
           {
               // delete
               v[ind] = 1;
               cnt = 0;
               del++;
           }
       }
       if(del == N-1) break; // 1개빼고 다 없앰
    }

    for(int i = 1 ; i <= N ; i++)
    {
        if(v[i] == 0)
        {
            cout << i;
            break;
        }
    }

}
