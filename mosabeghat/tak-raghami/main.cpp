#include <iostream>
int jam(long long int n){
    int sum = 0;
    while (n){
        sum += n%10;
        n/=10;
    }
    return sum;
}
using namespace std;

int main()
{
    long long int n;
    int sum = 0;
    cin>>n;
    sum += jam(n);
    while (sum>=10){
        sum = jam(sum);
    }
    cout<<sum;
    return 0;
}

