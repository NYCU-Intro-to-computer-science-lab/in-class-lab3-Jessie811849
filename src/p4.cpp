#include <iostream>
using namespace std;

void f(int D) {
    if (D == 0) return;
    cout << "|--";
    f(D - 1);  
}

int fib(int n, int D) {
    f(D);
    cout << "SEARCH fib(" << n << ")" << endl;
    
    if (n == 1 || n == 2) {
        f(D);
        cout << "GET fib(" << n << ") = 1" << endl;
        return 1;
    }
    
    int left = fib(n - 1, D + 1);
    int right = fib(n - 2, D + 1);
    int result = left + right;
    f(D);
    cout << "GET fib(" << n << ") = " << result << endl;
    return result;
}

int main() {
    int n;
    cin >> n;

    int ans = fib(n, 0);

    cout << ans << endl;  
    return 0;
}

