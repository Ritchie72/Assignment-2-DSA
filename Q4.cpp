#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    cout<<((a%100-a%10)/10)+(a-(a%10000-a%1000-a%100-a%10))/10000;
    return 0;
}