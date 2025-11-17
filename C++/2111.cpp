// 2111 - Understanding Sorobov 
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Representations from 0–9
    string top[10] = {
        "10", "10", "10", "10", "10", "01", "01", "01", "01", "01"
    };
    string bottom[10] = {
        "01111", "10111", "11011", "11101", "11110",
        "01111", "10111", "11011", "11101", "11110"
    };

    string n;
    while (cin >> n) {
        
        while (n.size() < 9) n = "0" + n;
        
        string l1, l2, l4, l5, l6, l7, l8;

        for (char c : n) {
            int d = c - '0';
            l1 += top[d][0];
            l2 += top[d][1];
            l4 += bottom[d][0];
            l5 += bottom[d][1];
            l6 += bottom[d][2];
            l7 += bottom[d][3];
            l8 += bottom[d][4];
        }

        cout << l1 << "\n";
        cout << l2 << "\n";
        cout << "---------\n";
        cout << l4 << "\n";
        cout << l5 << "\n";
        cout << l6 << "\n";
        cout << l7 << "\n";
        cout << l8 << "\n\n";
    }

    return 0;
}
