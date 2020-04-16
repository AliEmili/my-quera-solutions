#include <iostream>
#include <set>
using namespace std;

int main()
{
    set <string> s;
    string st;
    int a,b,c,ted;
    cin>>a;
    for (int i=0 ; i<a ; i++){
        cin>>st;
        s.insert(st);
    }
    cin>>b;
    for (int i=0 ; i<b ; i++){
        cin>>st;
        s.insert(st);
    }
    cin>>c;
    for (int i=0 ; i<c ; i++){
        cin>>st;
        s.insert(st);
    }
    ted = s.size();
    cout<<7-ted;

    return 0;
}

