#include <iostream>

using namespace std;
#define MAX_DEGREE 10

int main() {
    int n, i;

    cin >> n;

    int ar[10];

    for (i = 1; i <= n; i++) {
        cin >> ar[i];
    }

    for (i = 1; i <= n; i++) {
        if (ar[i] % 2 == 1 && ar[i] % 3 == 0)
            cout << ar[i] << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}