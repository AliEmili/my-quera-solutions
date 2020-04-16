#include <iostream>
#include <string>
#include <vector>

using namespace std;
bool isPrime(int n);
int main()
{
    vector <int> v;
    bool flag = false;
    int a,b;
    cin>>a>>b;
    string st;
    for(int i=a+1 ; i<b ; i++){
        if(isPrime(i)){
            v.push_back(i);
        }
    }
    for(int i=0 ; i<v.size() ; i++){
        cout<<v[i];
        if(i<v.size()-1){
            cout<<',';
        }
    }
    return 0;
}
/*-------------------------*/
bool isPrime(int n){
    bool prime = true;
    if(n<2){
        return false;
    }
    if(n==2){
        return true;
    }
    for(int i=2 ; i<n ; i++){
        if(n%i==0){
            prime = false;
            break;
        }
    }
        if(prime)
            return true;
        else
            return false;
}

