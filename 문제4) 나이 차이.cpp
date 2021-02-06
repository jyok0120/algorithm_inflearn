#include <iostream>

using namespace std;

int main()
{
    int N, Max = 0, Min = 999;
    cin >> N;
    int age[N];

    for( int i = 0 ; i < N ; i++)
        cin >> age[i];

    for(int i = 0 ; i < N ; i++)
    {
        if( Min  > age[i])
            Min = age[i];
        if( Max < age[i])
            Max = age[i];
    }

    cout << Max - Min ;
}
