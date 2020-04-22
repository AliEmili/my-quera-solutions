#include <iostream>

using namespace std;

int main() {
    int n,x,ans,ma = -10e7;
    cin >> n;
    for(int i=0 ; i<n ; i++){
        cin >> x;
        if(x > ma){
            ans = i+1;
            ma = x;
        }
    }
    cout << ans << endl;
    return 0;
}