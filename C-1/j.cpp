#include<iostream>
using namespace std;
int main(){
    int n,a,b,r;
    cin>>n>>a>>b;
    r = n*a;
    if(r<b){
        cout<<r;
    }
    else{
        cout<<b;
    }
    return 0;
}