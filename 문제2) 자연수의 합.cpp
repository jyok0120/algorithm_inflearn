#include <iostream>

using namespace std;

int main()
{
    int A, B, ans = 0;
    cin >> A >> B;
    for( int i = A ; i <= B; i++)
        ans += i;
    for( int i = A ; i < B; i++)
        cout << i << " + ";
    cout << B <<" = " << ans;
}
