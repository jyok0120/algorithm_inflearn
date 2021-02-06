#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int N;
    cin >> N;

    vector <int> num(N);

    for(int i = 0 ; i < N ; i++)
    {
        cin >> num[i];
        int idx = i;
        for(int j = i-1; j >= 0 ; j--)
        {
            if(num[j] < num[i]) idx --;
        }
        cout << idx + 1 << " ";
    }

}



