#include <iostream>
using namespace std;

int fib(int n){
if(n<=1)
    return 1;
else
    return fib(n-1)+fib(n-2);}

int main() {
    int n;
    cin >> n;
    if (1<=n<=50) { 
        int r = fib(n);
        cout << r <<"\n";
    }

    return 0;
}