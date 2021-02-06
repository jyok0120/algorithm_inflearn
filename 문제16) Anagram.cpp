#include <iostream>
#include <string>

using namespace std;

int alphabet1[53];
int alphabet2[53];

int main(){
    string str1, str2;

    cin >> str1 >> str2;

    for(int i = 0 ; i < str1.length(); i++)
    {
        alphabet1[str1[i] - 'A']++;
        alphabet2[str2[i] - 'A']++;
    }

    for(int i = 0 ; i < 53; i++)
    {
        if(alphabet1[i] != alphabet2[i])
        {
            cout << "NO";
            return 0;
        }
    }
    cout <<"YES";
}



