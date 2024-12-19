#include<iostream>
using namespace std;
int main(){
    long long n;
    int a;
    cin>>n;
    if(n%2==0){
        a=n/2;
    }
    else{
        a = -(n+1)/2;
    }
    cout<<a<<"\n";

    return 0;
}