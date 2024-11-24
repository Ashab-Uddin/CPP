#include<iostream>
#include <cctype>
using namespace std;
int main(){
    char s,t,Y,N;
    cin>>s>>t;
    if(s=='Y'){
        cout<<(char)toupper(t);
    }
    else if (s == 'N') {
        cout<<t;
    }
}