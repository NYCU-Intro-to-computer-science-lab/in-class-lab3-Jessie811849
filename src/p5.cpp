#include <iostream>
using namespace std;

void hanoi(int n, char from, char to, char aux) {
    if (n == 1) {
        cout << "Move ring " << 1 << " from " << from << " aux " << aux << endl;
        return;
    }
    hanoi(n - 1, from, aux, to);              
    cout << "Move ring " << n << " from " << from << " aux " << aux << endl; 
    hanoi(n - 1, to, from, aux);              

int main() {
    int N;
    while (cin >> N) {
        hanoi(N, 'A', 'B', 'C');
    }

    return 0;
}
