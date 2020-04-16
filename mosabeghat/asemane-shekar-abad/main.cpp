#include <iostream>

using namespace std;

int main()
{
    int n,m,k=0;
    cin>>n>>m;
    string st[n];
    for(int i=0 ; i<n ; i++){
        cin>>st[i];
        for(int j=0 ; j<st[i].size() ; j++){
            if(st[i].at(j)=='*')
                k++;
        }
    }
    cout<<k;
    return 0;
}

