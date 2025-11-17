// 1151 - Easy Fibonacci 
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    long long int fib[46];
    fib[0] = 0;
    fib[1] = 1;
    
    for(int i = 2 ; i < n ; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }
    
    bool space = false;
    for(int i = 0 ; i < n ; i++){
        if(space) cout << " ";
        cout << fib[i];
        space = true;
    }
    cout << endl;
    return 0;
}
