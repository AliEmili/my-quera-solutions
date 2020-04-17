#include <iostream>

using namespace std;

int main() {
    int x,n;
    cin >> x >> n;
    if(n==0){
        cout << 20 <<endl;
    }
    else if(n==7){
        cout << x <<endl;
    }
    else{
        x -= n;
        if(x<0){
            x = 0;
        }
        cout << x <<endl;
    }
    return 0;
}