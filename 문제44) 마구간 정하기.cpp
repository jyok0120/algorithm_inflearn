#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, C;

int Count(int dist, vector<int> a)
{
    int cnt = 1, tmp = 0;
    for(int i = 1 ; i < N; i++)
    {
        if(a[i]-a[tmp] >= dist)
        {
            cnt++;
            tmp = i;
        }
    }

    return cnt;
}

int main()
{
    cin >> N >> C;

    vector <int> a(N);

    for(int i = 0 ; i < N ; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int start = 1, last = a[N-1] - a[0], ans;

    while(start <= last)
    {
        int mid = (start + last) / 2;

        int check = Count(mid,a);

        if(check >= C)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            last = mid - 1;
        }

    }

    cout << ans ;

}
