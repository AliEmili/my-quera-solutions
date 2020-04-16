#include <iostream>

using namespace std;

int main()
{
    string st;
    cin>>st;
    for (int i=0 ; i<st.size() ; i++){
        for (int j=i ; j>=0 ; j--){
            st[j]=st[i];
        }
        cout<<st<<endl;
    }
    return 0;
}

