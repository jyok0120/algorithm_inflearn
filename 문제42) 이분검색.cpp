#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int N, M;

void bs(int start, int last, vector<int> a)
{
    int mid = (start + last )/ 2;

    cout << start << " " << mid << " " << last <<endl;

    if(a[mid] == M)
    {
        cout << mid+1;
        return;
    }

    if(a[mid] > M) bs(start,mid,a);
    else if(a[mid] < M) bs(mid+1,last, a);
}

int main()
{
    cin >> N >> M;

    vector<int> a(N);

    for(int i = 0 ; i < N ; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    bs(0,N-1, a);

}
