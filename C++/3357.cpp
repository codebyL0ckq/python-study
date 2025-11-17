// 3357 - Rich of Chimarrão 
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

int main(){
    int n;
    float l,q;
    string nomeaux;
    vector <string> nomes;

    cin >> n >> l >> q;
    while(cin >> nomeaux){
        nomes.push_back(nomeaux);
    }

    float final = l;
    int person = 0;
    while(final > q){
        final -=q;
        person++;
        if(person == n) person=0;
    }
    if(final < 0) final = final + q;
    else if(final == 0) final = q;

    cout << nomes[person] << ' ' << setprecision(1) << fixed << final << endl;
}
