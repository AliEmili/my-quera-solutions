#include <iostream>
#include <math.h>
using namespace std;
int Reverse(int n){
    int sum=0;
    int i=2;
    while(n>0){
        sum+=(n%10)*pow(10,i);
        i--;
        n/=10;
    }
    return sum+1;
}
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    if (Reverse(n1)>Reverse(n2))
        cout<<n2<<" < "<<n1;
    else if(n1==n2)
        cout<<n1<<" = "<<n2;
    else
        cout<<n1<<" < "<<n2;
    return 0;
}

