// 2815 - Stutterer Digitizer
#include <bits/stdc++.h>
using namespace std;

string corrigir(string s) {
    if (s.size() < 4) return s;
    string pref = s.substr(0, 2);
    if (s.substr(2, 2) == pref) return s.substr(2);
    return s;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string w;
    bool space = false;
    while (cin >> w) {
        if (space) cout << " ";
        cout << corrigir(w);
        space = true;
    }
    cout << endl;
}
