#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;

    getline(cin, str);
    for( int i = 0 ; i < str.length(); i++)
    {
        if(str[i] <= 'Z' && str[i] >= 'A')
            cout << char(str[i] + 'a' - 'A');
        else if( str[i] >= 'a' && str[i] <= 'z')
            cout << char(str[i]);
    }
}
