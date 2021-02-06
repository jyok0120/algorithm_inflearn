#include <iostream>
#include <string>

using namespace std;

int sum[105];

int digit_sum(int x)
{
    int sum = 0;
    while(x)
    {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int main()
{
    int N;
    cin >> N;

    int num[N];

    for(int i = 0 ; i < N ; i++)
    {
        cin >> num[i];
        sum[i] = digit_sum(num[i]);
    }

    int Max = 0, index;
    for(int i = 0 ; i < N ; i++)
    {
        if(sum[i] > Max){
            Max = sum[i];
            index = i;
        }else if ( sum[i] == Max){
            if(num[index] < num[i])
                index = i;
        }
    }

    cout << num[index];

}
