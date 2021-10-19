#include <iostream>
#include <conio.h>
using namespace std;

int ack(int m, int n) {
    if (m == 0) {
        return n + 1;
    } else if((m > 0) && (n == 0)) {
        return ack(m - 1, 1);
    } else if((m > 0) && (n > 0)) {
        return ack(m - 1, ack(m, n - 1));
    }
}

int main() {
    int x, y;
    cout << "Masukkan nilai x : ";  cin >> x;
    cout << "Masukkan nilai y : ";  cin >> y;
    cout << "\nHasil = " << ack(x, y) << endl;

    getch();
    return 0;
}
