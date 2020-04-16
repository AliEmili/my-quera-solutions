#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector <int> v;
    while(n>0){
        v.push_back(n%10);
        n/=10;
    }
    for(int i=v.size()-1 ; i>=0 ; i--){
        cout<<v[i]<<": ";
        for(int j=0 ; j<v[i] ; j++)
            cout<<v[i];
        cout<<endl;
    }
    return 0;
}

