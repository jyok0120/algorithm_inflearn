#include <iostream>

using namespace std;


int main()
{

    int N;
    cin >> N;

    int two = 0, five = 0;


    while(N)
    {
        int M = N;
        while(M)
        {
            if(M % 2 == 0)
            {
                two++;
                M /= 2;
            }
            else if( M % 5 == 0)
            {
                five++;
                M /= 5;
            }
            else{
                break;
            }
        }
        N--;
    }

    cout << ( two < five ? two : five);


}



