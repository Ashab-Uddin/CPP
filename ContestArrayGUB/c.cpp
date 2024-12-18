#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int A[n];

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    int Counter = 0;

    for (int i = 0; i < n; i++) {
        int flag = 0; 
        for (int j = 0; j < i; j++) {
            if (A[i] == A[j]) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) { 
            Counter++;
        }
    }

    cout << Counter << "\n";

    return 0;
}
