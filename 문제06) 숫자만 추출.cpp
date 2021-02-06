#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;

    cin >> str;

    int num = 0;

    for ( int i = 0 ; i < str.length() ; i++)
    {
        if( str[i] <='9' && str[i] > '0' || (str[i] == '0' && num))
            num = num * 10 + (int)(str[i]-'0');
    }

    cout << num << endl;

    int cnt = 0;
    for(int i = 1 ; i <= num ; i++)
    {
        if(num % i == 0)
            cnt++;
    }

    cout << cnt;
}
