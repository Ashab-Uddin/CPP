#include<iostream>
using namespace std;
int main(){
    int a,b,c,s1,s2,s3;
    cin>>a>>b>>c;
    s1 = a+b;
    s2 = b+c;
    s3 = a+c;
    if(s1>s2){
        cout<<s2;
    }
    else if(s1>s3){
        cout<<s3;
    }
    else{
        cout<<s1;
    }
    return 0;
}