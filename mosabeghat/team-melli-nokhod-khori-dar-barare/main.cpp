#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int ans[3]={0};
    int a,b,c,x[3],y[3];
    cin>>a>>b>>c;
    int Max = -10e8;
    for(int i=0 ; i<3 ; i++){
        cin>>x[i]>>y[i];
        if(y[i]>Max)
            Max = y[i];
    }
    int arr[Max]={0};
    for(int i=0 ; i<3 ; i++){
        for(int j=y[i] ; j>x[i] ; j--){
            arr[j-2]++;
        }
    }
    for(int i=0 ; i<Max ; i++){
        if(arr[i]==1){
            ans[0]++;
        }
        else if(arr[i]==2){
            ans[1]++;
        }
        else if(arr[i]==3){
            ans[2]++;
        }
    }
    cout<<ans[0]*a+ans[1]*2*b+ans[2]*3*c;
    return 0;
}

