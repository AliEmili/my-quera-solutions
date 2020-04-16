#include <iostream>

using namespace std;

int main()
{
    int r,c,a,b;
    cin>>r>>c;
    a = 10 - r + 1;
    if (c <= 10)
        cout<<"Right "<<a<<" "<<c;
    else{
        b = 20 - c + 1;
        cout<<"Left "<<a<<" "<<b;
    }
    return 0;
}

