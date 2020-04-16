#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0 ; i<n ; i++){
        int tavanDo = pow(2,i);
        if(tavanDo>n){
            cout<<tavanDo;
            break;
        }
    }
    return 0;
}

