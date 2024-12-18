#include <iostream>
using namespace std;

int main() {
    int n;
    long long sum = 0;
    cin >> n;

    if (n <= 0) { 
        return 0;
    }

    int A[n];

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < n; i++) {
        sum += A[i];
    }

    cout << sum << "\n";

    return 0;
}
