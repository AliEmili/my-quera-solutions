#include <iostream>

using namespace std;
//1 1 2 2 2 8
int main()
{
    int a[6],x[6]={1,1,2,2,2,8};
    for (int i=0 ; i<6 ; i++){
        cin>>a[i];
    }
    for (int i=0 ; i<6 ; i++){
        cout<<x[i]-a[i]<<" ";
    }
    return 0;
}

