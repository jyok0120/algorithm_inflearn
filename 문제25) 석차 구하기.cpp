#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp (int a , int b)
{
    return a > b;
}

int main()
{

    int N;
    cin >> N;

    vector <int> num(N);
    int score[N];

    for(int i = 0 ; i < N ; i++)
    {
        cin >> num[i];
        score[i] = num[i];
    }

    sort(num.begin(), num.end(), cmp);

    for(int i =0; i < N ; i++)
    {
        for(int j = 0; j < N ; j++)
        {
            if(num[j] == score[i])
            {
                cout << j+1 << " ";
                break;
            }
        }
    }


}



