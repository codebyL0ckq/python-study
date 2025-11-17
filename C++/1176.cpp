// 1176 - Fibonacci Array 
#include <iostream>
using namespace std;
#define MAX 61

int main() {
    int n,t,i;
    cin >> t;
    
    long long int fib[MAX];
    fib[0] = 0;
    fib[1] = 1;

    for(i=2 ; i < MAX ; i++) 
        fib[i] = fib[i-1] + fib[i-2];
    
    while(t--){
        cin >> n;
        cout << "Fib(" << n << ") = " << fib[n] << endl;
    }
    
    return 0;
}
