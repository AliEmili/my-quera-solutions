#include <iostream>

using namespace std;

int main()
{
    int d,p;
    cin>>p>>d;
    int i=0;
    while (++i){
        if ((i*d%p)<=(p/2)){
            cout<<i*d<<endl;
            return 0;
        }
    }
    return 0;
}

