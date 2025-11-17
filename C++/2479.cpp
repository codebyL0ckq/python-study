//2479 - Sorting Santa's List of Children
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

void quicksort(int inicio, int fim, vector<string> &n) {
    string pivo = n[(inicio+fim)/2];
    int i,j;
    i = inicio;
    j = fim;

    while(i <= j) {
        while(n[i] < pivo) i++;
        while(n[j] > pivo) j--;

        if(i <= j) {
            swap(n[i],n[j]);
            i++;
            j--;
        }
    }

    if(j > inicio) quicksort(inicio, j, n);
    if(i < fim) quicksort(i, fim, n);
}


int main(){
    int n,bons=0,maus=0;

    cin >> n;
    vector<string> name;
    string in,val;
    while(n--){
        cin >> val >> in;
        if(val == "+") bons++;
        else maus++;
        name.push_back(in);
    }

    if(!name.empty()) quicksort(0, name.size() - 1, name);

    for(string s : name) {
        cout << s << endl;
    }
    cout << "Se comportaram: " << bons << " | Nao se comportaram: " << maus << endl;
    return 0;
}
