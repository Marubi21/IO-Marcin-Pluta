#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    if (x <= 0) {
        cout << "Prosze wpisac liczbe dodatnia" << endl;
        return 0;
    }
    cout << x << endl;
    return 0;
}
