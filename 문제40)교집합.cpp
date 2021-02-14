#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N, M;


    cin >> N;
    vector<int> a(N);

    for(int i = 0 ; i < N ; i++)
    {
        cin >> a[i];
    }

    cin >> M;
    vector<int> b(M), c(N+M);

    for(int i = 0 ; i < M; i++)
    {
        cin >> b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int p1=0,p2=0,p3=0;

    while(p1 < N && p2 < M)
    {
        if(a[p1] == b[p2]) c[p3++] = a[p1++];
        else if(a[p1]<b[p2]) p1++;
        else p2++;
    }

    for(int i = 0 ; i < p3 ; i++)
        cout << c[i] <<" ";
}
