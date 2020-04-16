#include <iostream>

using namespace std;

int main()
{
    int n,k,sum=0,t;
    cin>>n>>k;
    for(int i=0 ; i<n ; i++){
        cin>>t;
        sum+=t;
    }
    if(sum%k==0){
        int ted = sum/k;
        cout<<n-ted;
        return 0;
    }
    else{
        int ted = sum/k+1;
        cout<<n-ted;
    }

    return 0;
}

