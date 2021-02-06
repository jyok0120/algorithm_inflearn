#include <iostream>

using namespace std;

int Num[200001];

int main(){

    int N;
    cin >> N;

    int A[N], B[N];

    for(int i = 0 ; i < N ; i++)
        cin >> A[i];
    for(int i = 0 ; i < N ; i++)
        cin >> B[i];

    for( int i = 0 ; i < N ; i++)
    {
        if( A[i] == B[i]) cout << "D" << endl;
        else
        {
            if(A[i] == 1 && B[i] == 3 || A[i] == 2 && B[i] == 1 || A[i] == 3&& B[i] ==2 )
                cout << "A" << endl;
            else cout << "B"<< endl;
        }
    }
}



