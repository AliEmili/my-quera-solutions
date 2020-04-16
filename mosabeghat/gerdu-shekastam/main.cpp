#include <iostream>

using namespace std;

int main()
{
    bool flag = true;
    int n,x,y;
    cin>>n>>x>>y;
    if(n%x==0){
        cout<<n/x<<" "<<0;
    }
    else if(n%y==0){
        cout<<0<<" "<<n/y;
    }
    else{
        for(int i=1 ; i<=n/x ; i++){
            for(int j=1 ; j <=n/y ; j++){
                if(i*x+j*y==n){
                    cout<<i<<" "<<j;
                    flag = false;
                    return 0;
                }
            }
        }
        if(flag){
        cout<<-1;
        }
    }
    return 0;
}

