#include<bits/stdc++.h>
using namespace std;

int doS(int num){
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
}
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    doS(num);
    cout<<num<<endl;
    return 0;
}