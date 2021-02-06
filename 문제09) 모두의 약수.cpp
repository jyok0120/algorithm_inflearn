#include <iostream>

using namespace std;



int main()
{

    int N, cnt = 0;
    cin >> N;

    int num[N + 1] ={0,};

    for(int i = 1 ; i <= N ; i++)
    {
        for(int j = i; j <= N ; j+= i)
            num[j]++;
    }

    for(int i = 1; i <= N; i++)
        cout << num[i] << " ";

}



