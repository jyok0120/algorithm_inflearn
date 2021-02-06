#include <iostream>

using namespace std;



int main()
{

    int A[10], B[10];
    int a_score =  0, b_score = 0;
    char lastWin;

    for(int i = 0 ;i < 10 ; i++)
    {
        cin >> A[i];
    }
    for(int i = 0 ;i < 10 ; i++)
    {
        cin >> B[i];
    }

    for(int i = 0 ; i < 10 ; i++)
    {
        if(A[i] > B [ i]) a_score += 3, lastWin = 'A';
        else if (A[i] < B[i]) b_score += 3 , lastWin = 'B';
        else a_score += 1, b_score +=1;
    }
     cout << a_score << " " << b_score << endl;
    if(a_score > b_score) cout <<"A";
    else if ( a_score < b_score) cout << "B";
    else{
            if(lastWin == 'A') cout << "A";
            else if (lastWin == 'B') cout << "B";
            else cout << "D";
    }

}



