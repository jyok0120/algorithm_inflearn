#include <iostream>

using namespace std;

int sum(int n)
{
    int ret = 0;

    for(int i = 1 ; i <= n; i++)
    {
        ret +=i;
    }
    return ret;
}

int main(){
    int N;
    cin >> N;

    while(N--)
    {
        int num, ans;
        cin >> num >> ans;
        if(sum(num) == ans)
            cout << "YES"<< endl;
        else cout << "NO" << endl;

    }
}



