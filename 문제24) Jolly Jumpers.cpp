#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main()
{

    int N;
    cin >> N;

    vector <int> num(N);

    for(int i = 0 ; i < N ; i++)
        cin >> num[i];

    int cnt[N-1] = {0,};

    for(int i =0; i < N-1 ; i++)
    {
        int tmp =abs(num[i+1]-num[i]) - 1; 
        if( tmp >=0 && tmp < N-1 )cnt[tmp]++;
    }

    for(int i = 0 ; i < N-1 ; i++)
    {
        if(cnt[i] == 0){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}



