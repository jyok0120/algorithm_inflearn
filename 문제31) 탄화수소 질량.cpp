#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;

    cin >> str;

    int w = 0;
    int hi = 0;
    int c = 0, h = 0;

    if(str[1] == 'H')
    {   // a = 1
        c = 1;
        hi = 1;
    }
    else
    {
        // a > 1;
        int i;
        for(i = 1; str[i] != 'H' ; i++)
        {
            c = c * 10 + str[i] - '0';
        }

        hi = i;
    }

    if(str[hi + 1] == '\0') h = 1;


    for(int i = hi + 1 ; str[i] != '\0' ; i++)
    {
        h = h * 10 + str[i] - '0';
    }

    w += 12 * c + h;

    cout <<w;
}



