//3034 - The Douglas Case 
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool is_prime(int n){
    if (n <= 1) return false;

    if(n == 2) return true;

    if (n % 2 == 0) return false;

    for(int i=3 ; i * i <= n ; i+=2) {
        if (n % i == 0) return false;
    }

    return true;
}

int main(){
    int t;
    int n;
    cin >> t;
    while(t--) {
        cin >> n;
        n = n + 1;
        if(n % 7 == 0 && is_prime(n+2) && n % 2 != 0) cout << "Yes";
        else cout << "No";
        cout << endl;
    }
    return 0;
}
