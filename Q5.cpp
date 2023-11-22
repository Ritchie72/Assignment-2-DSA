#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int sum = 0;
    for(int i=0;i<3;i++){
        sum = sum + a%10;
        a = a/10;
    }
    cout<<sum;
    
}