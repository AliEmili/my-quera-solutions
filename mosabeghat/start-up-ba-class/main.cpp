#include <iostream>

using namespace std;

int main()
{
    bool flag = true;
    int x[4];
    int y[4] = {0};
    int temp,ind = 0;
    for(int i=0 ; i<4 ; i++){
        cin>>x[i];
        if(x[i]==0){
            cout<<0<<" "<<0<<" "<<0<<" "<<0;
            return 0;
        }
    }
    while(flag){
        x[ind]--;
        y[ind]++;
        temp = x[0];
        for(int i=0 ; i<3 ; i++){
            x[i]=x[i+1];
        }
        x[3] = temp;
        for(int i=0 ; i<4 ; i++){
            if(x[i]==0){
                flag = false;
            }
        }
        ind++;
        if(ind>3){
            ind=0;
        }
    }
    for(int i=0 ; i<4 ; i++){
        if(i==3){
            cout<<y[i];
        }
        else{
            cout<<y[i]<<" ";
        }
    }
    return 0;
}

