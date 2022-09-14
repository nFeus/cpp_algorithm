#include <iostream>
#include <algorithm>

using namespace std;

string a;

int main() {

    getline(cin, a);

    for (int i = 0; i < a.size(); i++) {
        if ('A' < a[i] && a[i] <= 'z') {
            if ('A' <= a[i] && a[i] < 'a') {
                if(a[i] + 13 > 'Z')
                    a[i] -= 13;
                else a[i] += 13;
            } else {
                if (a[i] + 13 > 'z')
                    a[i] -= 13;
                else a[i] += 13;
            }
        }
    }
    cout << a ;

    return 0;
}