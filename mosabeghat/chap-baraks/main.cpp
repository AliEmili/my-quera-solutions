#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> v;
    int x;
    cin>>x;
    while (x){
        v.push_back(x);
        cin>>x;
    }
    for (int i=v.size()-1 ; i>=0 ; i--)
        cout<<v[i]<<endl;
    return 0;
}
/*
3
4
7
4
9
0
*/

