#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a,r;
    cin>>a;
    r = a/5;
    if(a%5 != 0){
        r++;
    }
    cout<<r<<"\n";
    return 0;
}