#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string st,rev;
    cin>>st;
    rev=st;
    reverse(rev.begin(),rev.end());
    if(st==rev){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}

