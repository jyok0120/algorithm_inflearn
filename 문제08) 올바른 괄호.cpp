#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cin >> str;

    int check = 0;


    for( int i = 0 ; i < str.length(); i++)
    {
        if(check) // when parentheses opened
        {
            if(str[i] == '(')
                check++;
            else if (str[i] == ')')
                check--;
        }
        else
        {
            // not opened yet
            if(str[i] == '(')
                check++;
            else
            {
                cout << "NO";
                return 0;
            }
        }
    }

    if( check == 0)
        cout << "YES";
    else cout << "NO";

}
