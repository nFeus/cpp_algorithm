#include <iostream>

using namespace std;

int n;
string temp;
char a[154];
string res;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> temp;
        a[temp[0]- 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if(a[i] >= 5) {
            res += i + 'a';
        }
    }
    if (res.size()) {
        cout << res << "\n";
    } else {
        cout << "PREDAJA" << "\n";
    }


    return 0;
}