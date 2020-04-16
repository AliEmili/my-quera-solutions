#include <iostream>

using namespace std;

int main()
{
    int n,x,ma=-1;
    cin>>n;
    while(n--){
        cin>>x;
        if(x>ma)
            ma=x;
    }
    cout<<ma;
    return 0;
}

