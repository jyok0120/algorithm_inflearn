#include <iostream>
#include <string>

using namespace std;

int main()
{
    string num;
    char sex;

    cin >> num;

    if( num[7] == '1' || num[7] == '3'){
        sex = 'M';
    }else{
        sex = 'W';
    }


    int age = (num[0] - '0') * 10 + num[1] - '0';

    if( age > 20 ) age = 2020 - 1900 - age;
    else age = 20 - age;

    cout << age <<" " << sex;
}
