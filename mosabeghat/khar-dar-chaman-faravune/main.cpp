#include <iostream>

using namespace std;

int main()
{
    int a,b,l,td,sum=0;
    cin>>a>>b>>l;
    if (l==1){
        cout<<a<<endl;
        return 0;
    }
    td = l/2;
    sum += td*(a+b);
    if (l%2)
        sum += a;
    cout<<sum;
    return 0;
}

