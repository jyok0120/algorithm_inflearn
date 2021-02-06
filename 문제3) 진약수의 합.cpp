#include <iostream>

using namespace std;

int main()
{
    int N, ans = 0;
    cin >> N;

    for( int i = 1; i < N ; i++)
    {
        if( N % i == 0)
        {
            if(ans) cout << " + ";
            cout << i ;
            ans += i;
        }
    }
    cout << " = " << ans;
    return 0;
}
