#include <iostream>

using namespace std;

int main() {
    int h, m;
    cin >> h >> m;
    if(h != 0){
        h = 12 - h;
    }
    if(m != 0){
        m = 60 - m;
    }
    if(h<10){
        cout << 0;
    }
    cout << h;
    cout << ':';
    if(m<10){
        cout << 0;
    }
    cout << m;
    return 0;
}