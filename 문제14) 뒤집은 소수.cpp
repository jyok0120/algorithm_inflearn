#include <iostream>

using namespace std;

bool check(int a)
{
    if( a < 2) return false;
    int i = 2;
    while(i < a)
    {
        if(a % i == 0) return false;
        i++;
    }
    return true;
}

int re(int i)
{
    int ret = 0;
    while(i)
    {
        ret = ret * 10 + i%10;
        i /= 10;
    }
    return ret;
}

int main(){
    int n;
    cin >> n;
    int num[n];
    for(int i = 0 ; i < n; i++)
    {
        cin >> num[i];
        int tmp = re(num[i]);
        if(check(tmp))
        {
            cout <<tmp<<" ";
        }
    }
}



