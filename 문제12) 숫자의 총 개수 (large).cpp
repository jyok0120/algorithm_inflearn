#include <iostream>
#include <cmath>


using namespace std;

int length(int n)
{
    int cnt = 0;
    while(n)
    {
        n/= 10;
        cnt++;
    }
    return cnt;
}

int offset(int l)
{
    int ret = 0;
    int length = 0;
    while(l--)
    {
        if(ret == 0) ret = 9;
        else ret += 9 * pow(10, length) * (length + 1);
        length++;
    }
    return ret;
}

int power(int len)
{
    int ans = 1;

    while(len-- ){
        ans *= 10;
    }
    return ans;
}


int main()
{

    int N;
    cin >> N;

    int len = length(N);

    int off = offset(len - 1);

    int p = power(len-1);


    if( N < 10) cout << N;
    else cout << off + (N - p + 1) * len ;

    /*
        if( N < 10 or length = 1 ) cout << N * length;
        else if( N < 100 or length = 2 ) cout << 9 + (N - 10 + 1) * length
        else if ( N < 1000 or length = 3 ) cout << 9 + 90 * (length-1) + (N - 100+ 1) * length


    */
}



