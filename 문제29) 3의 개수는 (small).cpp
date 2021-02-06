#include <iostream>

using namespace std;


int main()
{

    int N;
    cin >> N;

    int three = 0;

    for(int i = 3 ; i <=N ; i++)
    {
        int num = i;
        while(num)
        {
            if(num % 10 == 3)
            {
                three++;
            }
            num /= 10;
        }
    }
    cout << three;


}



