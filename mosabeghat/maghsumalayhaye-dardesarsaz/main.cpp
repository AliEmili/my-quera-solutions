#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int n,a1 = 0,a2 = 0;
    cin >> n;
    for(int i=1 ; i<=n ; i++){
        for(int j=1; j<=i ; j++){
            if(i%j==0){
                a1++;
                a2 += j;
            }
        }
    }
    cout << a1 << ' ' << a2 << endl;
    return 0;
}