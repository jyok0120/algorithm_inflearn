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
        for(int j = 0 ; j < N - i ; j++)
        {
            if(num[j] > num[j+1])
            {
                int tmp = num[j];
                num[j] = num[j+1];
                num[j+1] = tmp;
            }
        }
    }

    for(int i = 0 ; i < N ; i++)
    {
        cout << num[i] << " ";
    }
}



