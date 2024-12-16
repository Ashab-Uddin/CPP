#include<iostream>
using namespace std;
int main(){
    int n,s=0;
    cin>>n;
    int a[n];
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    for(int i =0;i<n;i++){
        s = s+a[i];
        
    }
    if(s>0){
            cout<<"HARD"<<"\n";
        }
    if(s == 0){
        cout<<"EASY"<<"\n";
    }
    
    return 0;
}