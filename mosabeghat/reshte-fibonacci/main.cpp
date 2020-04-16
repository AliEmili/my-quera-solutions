#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int f[n];
    vector <int> m;
    f[0]=1;
    f[1]=2;
    for (int i=2 ; i<n ; i++){
        f[i]=f[i-2]+f[i-1];
    }
    for (int i=0 ; i<n ; i++){
        m.push_back(f[i]);
    }
    for (int i=1,j=0 ; i<=n ; i++){
        if (i==f[j]){
            cout<<"+";
            j++;
        }
        else{
            cout<<"-";
        }
    }
    return 0;
}

