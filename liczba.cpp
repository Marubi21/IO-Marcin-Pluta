#include <iostream>
using namespace std;

bool czy_bezkwadratowa(int n) {
    if (n < 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % (i * i) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int x;
    cin >> x;
    cout << x << "jest ";

    if (czy_bezkwadratowa(x)) {
        cout << "bezkwadratowa";
    } else {
        cout << "nie bezkwadratowa";
    }
    cout << endl;

    return 0;
}
