#include <iostream>

using namespace std;

int main()
{
    int n;
    float m;
    cin>>n>>m;
    float bmi = n/(m*m);
    cout<<fixed;
    cout.precision(2);
    cout<<bmi<<endl;
    if(bmi<18.50){
        cout<<"Underweight";
    }
    else if(bmi>=18.5 && bmi<25){
        cout<<"Normal";
    }
    else if(bmi>=25 && bmi<30){
        cout<<"Overweight";
    }
    else if(bmi>=30){
        cout<<"Obese";
    }
    return 0;
}

