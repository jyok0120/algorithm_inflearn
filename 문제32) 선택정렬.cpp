#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int num[N];

    for(int i = 0 ; i < N ; i++)
    {
        cin >> num[i];
    }

    for(int i = 0 ; i < N ; i++)
    {
        int Min = num[i], index = i;
        for(int j = i ; j < N; j++)
        {
            if( Min > num[j])
            {
                Min = num[j];
                index = j;
            }
        }

        int tmp = num[index];
        num[index] = num[i];
        num[i] = tmp;
    }

    for(int i = 0 ; i < N ; i++)
        cout << num[i] << " ";



}



