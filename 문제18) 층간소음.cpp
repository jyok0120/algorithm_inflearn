#include <iostream>

using namespace std;

int main(){
    int N, M;
    cin >> N >>M;

    int data[N];

    for(int i = 0 ; i < N ; i++)
        cin >> data[i];

    int cnt = 0, ans = cnt;
    for(int i = 0 ; i < N ; i++)
    {
        if(data[i] > M)
            cnt++;
        else {
            if( ans < cnt) ans = cnt;
            cnt = 0;
        }
    }
     if( ans < cnt) ans = cnt;
        cnt = 0;

    cout << ans;

    //-1 출력 처리 안한거 같은데
}



