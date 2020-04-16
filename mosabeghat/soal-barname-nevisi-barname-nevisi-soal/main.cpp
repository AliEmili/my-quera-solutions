#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string st[n];
    for(int i=0 ; i<n ; i++){
        cin>>st[i];
    }
    for(int i=n-1 ; i>-1 ; i--)
        cout<<st[i]<<" ";
    return 0;
}

