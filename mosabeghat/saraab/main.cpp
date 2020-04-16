#include <iostream>

using namespace std;

int main()
{
    int n,a,b;
    cin>>n;
    for (int i=0 ; i<n ; i++){
        cin>>a>>b;
        if(a==b){
            if(a%2==0){
                cout<<a*2<<endl;
            }
            else{
                cout<<(a+b)-1<<endl;
            }
        }
        else if(a==b+2){
            if(a%2==0){
                cout<<a+b<<endl;
            }
            else{
                cout<<(a+b)-1<<endl;
            }
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}

