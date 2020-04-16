#include <iostream>

using namespace std;

int main()
{
    string st;
    getline(cin,st);
    int indexr=0,indexy=0,indexg=0;
    for(int i=0 ; i<st.size() ; i++){
        if (st[i]=='R' || st[i]=='r')
            indexr++;
        if (st[i]=='Y' || st[i]=='y')
            indexy++;
        if (st[i]=='G' || st[i]=='g')
            indexg++;
    }
    if(indexr>=3 || (indexr>=2 && indexy>=2) || indexg==0)
        cout<<"nakhor lite";
    else
        cout<<"rahat baash";
    return 0;
}

