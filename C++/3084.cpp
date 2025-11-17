// 3084 - Old Clock
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int h,m;
    while(cin >> h >> m){ // h 30 graus por hora - m 6 graus por minuto
        int hora = h/30;
        int min = m/6;
        cout << setfill('0') << setw(2) << hora << ':' << setw(2) << min << endl;
    }
    return 0;
}
