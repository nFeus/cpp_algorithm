#include <algorithm>
#include <iostream>

using namespace std;

string a[154];
int b;
char res[26];
bool g = false;
string str;
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> b;

    for (int i = 0; i < b; i++) {
        cin >> a[i];
        res[a[i][0] - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if(res[i] > 5) {
            str = 'a' + i;
            cout << str;
            g = true;
        }
    }
    if(!g) cout << "PREDAJA";
    cout << '\n';


    return 0;
}