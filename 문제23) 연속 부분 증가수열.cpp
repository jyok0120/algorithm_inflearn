#include <iostream>
#include <vector>
using namespace std;



int main()
{

    int N;
    cin >> N;

    vector <int> num(N);

    for(int i = 0 ; i < N ; i++)
        cin >> num[i];

    int inc = 1, Max = 1;

    for(int i =1; i < N ; i++)
    {
        inc++;
        if(num[i] < num[i-1]) inc = 1;
        if(inc > Max) Max = inc;
    }
    cout << Max;
}



