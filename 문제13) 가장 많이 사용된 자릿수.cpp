#include <iostream>
#include <string>

using namespace std;

int num[10];

int main(){

	string str;
	cin >> str;

    for( int i = 0 ; i < str.length(); i++)
    {
        int tmp = (int)(str[i] - '0');
        num[tmp]++;
	}

    int Max = 0, index;
    for(int i = 1 ; i < 10; i++)
    {
    	if(Max <= num[i])
        {
            Max = num[i];
            index = i;
        }

	}
	cout << index;
}
