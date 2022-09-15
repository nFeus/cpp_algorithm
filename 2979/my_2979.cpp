#include <iostream>
#include <algorithm>

using namespace std;

int A, B, C;

int p, e;
int res[104];
int m;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> A >> B >> C;

    for (int i = 0; i < 3; i++) {
        cin >> p >> e;
        for (int j = p; j < e; j++) {
            res[j]++;
        }
    }

    for (int i = 0; i < 104; i++) {
        if (res[i]) {
            if(res[i] == 1) m += A;
            else if(res[i] == 2) m += res[i] * B;
            else if(res[i] == 3) m += res[i] * C;

        }
    }

    cout << m << "\n";

    return 0;
}