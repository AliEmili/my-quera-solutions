#include <iostream>

using namespace std;

int main()
{
    int n,k=0;
    cin>>n;
    string fr,sc;
    cin>>fr>>sc;
    for(int i=0 ; i<n ; i++){
        if(fr[i]!=sc[i])
            k++;
    }
    cout<<k;
    return 0;
}

