#include<iostream>
#include<vector>

using namespace std;


int main()
{
    int N, M;

    cin >> N;

    vector<int> a(N);

    for(int i = 0 ;i < N ; i++)
    {
        cin >> a[i];
    }

    cin >> M;

    vector<int> b(M);

    for(int i = 0 ;i < M ; i++)
    {
        cin >> b[i];
    }

    vector<int> c(N+M);


     int p1 = 0 , p2 = 0, p3 = 0;

    while(p1 < N && p2 < M)
    {
        if(a[p1] < b[p2]) c[p3++] = a[p1++];
        else c[p3++] = b[p2++];
    }
    while(p1 < N ) c[p3++] = a[p1++];
    while(p2 < M ) c[p3++] = b[p2++];

    for(int i = 0 ; i < p3 ; i++)
        cout << c[i] << " ";

}
