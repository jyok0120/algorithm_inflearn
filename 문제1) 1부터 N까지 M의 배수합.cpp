#include <iostream>

using namespace std;

int main()
{

    int N , M, ans = 0;
    cin >> N >> M;

    for(int i = 1 ; i <= N ; i++)
    {
        if(i % M == 0)
            ans += i;
    }
    cout << ans;
}



