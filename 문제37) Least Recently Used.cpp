#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int S, N, cnt = 0;
int cache[10];

void caching(int data)
{
    for(int i = 0 ; i < S ; i++)
    {
        if(cache[i] == data)
        {
            // hit
            for(int j = i ; j >0 ; j--)
                cache[j] = cache[j-1];

            cache[0] = data;
            return;
        }
    }

    // miss
    for(int j = S-1 ; j >=0 ; j--)
    cache[j] = cache[j-1];
    cache[0] = data;
    return;
}

int main()
{


    cin >> S >> N ;

    int data[N];

    memset(cache, 0, sizeof(cache));

    for(int i = 0 ; i < N ; i++)
    {
        cin >> data[i];
        caching(data[i]);
    }

    for(int i = 0 ; i < S ; i++)
        cout << cache[i] << " ";

}
