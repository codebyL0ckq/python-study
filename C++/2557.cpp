// 2557 - R+L=J 
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
    string str;
    int r,l,j;
    while(getline(cin, str)){ // r+l=j - r=j-l - l=j-r
        int pMais = str.find("+"), pIgual = str.find("=");

        string r = str.substr(0,pMais);
        string l = str.substr(pMais+1, pIgual - pMais - 1);
        string j = str.substr(pIgual+1);

        int R,L,J;
        
        if(r == "R"){
            J = stoi(j,nullptr,10);
            L = stoi(l,nullptr,10);
            cout << J - L << endl;
        }
        else if(l == "L"){
            J = stoi(j,nullptr,10);
            R = stoi(r,nullptr,10);
            cout << J - R << endl;
        }
        else{ // j == "J"
            R = stoi(r,nullptr,10);
            L = stoi(l,nullptr,10);
            cout << R + L << endl;
        }
    }
    return 0;
}
