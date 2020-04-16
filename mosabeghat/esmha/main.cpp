#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n,Max=0,sum=0;
    cin>>n;
    string st;
    for(int i=0 ; i<n ; i++){
        cin>>st;
        set <char> s;
        for(int j=0 ; j<st.size() ; j++){
            s.insert(st[j]);
        }
        if(s.size()>Max)
            Max=s.size();
    }
    cout<<Max;
    return 0;
}

