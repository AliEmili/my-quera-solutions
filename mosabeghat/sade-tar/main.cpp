#include <iostream>

using namespace std;

int main()
{
    float a[4],sum=0,pro=1,mi=10e8,ma=-10e8;
    for(int i=0 ; i<4 ; i++){
        cin>>a[i];
        sum+=a[i];
        pro*=a[i];
        if(a[i]>ma){
            ma=a[i];
        }
        if(a[i]<mi){
            mi=a[i];
        }
    }
    cout<<fixed;
    cout.precision(6);
    cout<<"Sum : "<<sum<<endl;
    cout<<"Average : "<<sum/4<<endl;
    cout<<"Product : "<<pro<<endl;
    cout<<"MAX : "<<ma<<endl;
    cout<<"MIN : "<<mi<<endl;

    return 0;
}

