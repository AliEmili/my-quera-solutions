#include <iostream>

using namespace std;

int main()
{
    string st[5],st1,st2;
    st1 = "MOLANA";
    st2 = "HAFEZ";
    bool flag = false;
    for (int i=0 ; i<5 ; i++)
        cin>>st[i];
    for (int i=0 ; i<5 ; i++){
        int fin1 = st[i].find(st1);
        int fin2 = st[i].find(st2);
        if (fin1!=-1 || fin2!=-1){
            cout<<i+1<<" ";
            flag = true;
        }
    }
    if (flag==false){
        cout<<"NOT FOUND!";
    }
    return 0;
}

