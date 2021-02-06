#include <iostream>

using namespace std;

int Num[200001];

int main(){

    int N;
    cin >> N;

    int cnt = 0;
    for(int i= 2; i <= N ; i++)
    {
        for(int j = i*2; j <= N ; j += i)
        {
            Num[j] = -1;
        }
    }


    for(int i = 2; i <= N; i++)
    {
        if(Num[i] != -1)
        {
            cnt++;
        }
    }

    cout << cnt;
}



