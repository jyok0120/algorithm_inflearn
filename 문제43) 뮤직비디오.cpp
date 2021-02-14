#include <iostream>
#include <vector>


using namespace std;

int N, M;

int Count(int len, vector<int> a)
{
    int cnt = 1, sum = 0;

    for(int i = 0 ; i < N ; i++)
    {
        if(sum + a[i] > len)
        {
            cnt++;
            sum = a[i];
        }
        else
        {
            sum += a[i];
        }
    }


    return cnt;
}

int main()
{
    cin >> N >> M;

    vector <int> a(N);

    int sum = 0, maxx = -2147000000;

    for(int i = 0 ; i < N ; i++)
    {
        cin >> a[i];
        sum += a[i];
        if(a[i] > maxx) maxx = a[i];
    }

    int start = 1, last = sum, ans;

    while(start <= last)
    {
        int mid = (start+last)/2;

        if(Count(mid,a) <= M && mid >= maxx)
        {
            ans = mid;
            last = mid - 1;

        }else
        {
            start = mid + 1;
        }
    }

    cout << ans;

}
