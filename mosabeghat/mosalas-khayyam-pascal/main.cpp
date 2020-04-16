#include <iostream>

using namespace std;

int main()
{
    long long int n;
    cin>>n;
    long long int a[n+1][n+1];
    for(int i=0 ; i<=n ; i++){
        for(int j=0 ; j<=n ; j++){
            if(i==1 || j==1 || j==i){
                a[i][j]=1;
            }
            else if (j<i &&(j!=0&&i!=0)){
                a[i][j]=a[i-1][j]+a[i-1][j-1];
            }
            else{
                a[i][j]=0;
            }
        }
    }
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=i ; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

