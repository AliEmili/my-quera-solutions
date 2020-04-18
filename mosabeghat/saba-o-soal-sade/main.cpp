#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n,k,ans;
    double rem;
    cin >> n >> k;
    if(k == 0){
        cout << n;
        return 0;
    }
    rem = n;
    for(int i=0 ; i<k ; i++){
        rem /= 2.0;
        // cout <<"rem :" << rem << endl;
    }
    ans = floor(rem);
    cout << ans << endl;
    return 0;
}