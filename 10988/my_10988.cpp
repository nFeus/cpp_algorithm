#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
string a;
string b;
int s;
int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> a;
    b = a;
    reverse(a.begin(), a.end());

    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            s = 0;
            break;
        }
        s = 1;
    }

    cout << s << '\n';
    return 0;
}