#include <iostream>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    if(n==k){
        cout<<1;
        return 0;
    }
    int turn = 1;
    int s = 0;
    turn += k;
    s++;
    while (turn != 1){
        turn += k;
        s++;
        if(turn > n){
            turn %= n;
        }
    }
    cout<<s;
    return 0;
}

