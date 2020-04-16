#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string st,sr;
    bool has = true;
    cin>>st;
    set <char> ch;
    for(int i=0 ; i<st.size() ; i++)
        ch.insert(st[i]);
    for(int i=0 ; i<n ; i++){
        cin>>sr;
        set<char> ch2;
        for(int j=0 ; j<sr.size() ; j++)
            ch2.insert(sr[j]);
        if(ch==ch2){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}
/*

4 quera102
quEra0012
qu0erraa12
sN0Ap12
qurra00L

*/

