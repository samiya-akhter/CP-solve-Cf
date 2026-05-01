#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int x[n];   // works in many compilers, but not standard C++

    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    if (k < 1 || k > n) return 0;

    int a = x[k - 1];
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (x[i] >= a && x[i] > 0) {
            count++;
        }
    }

    cout << count;

    return 0;
}