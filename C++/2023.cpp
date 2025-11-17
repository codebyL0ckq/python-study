// 2023 - The Last Good Kid
#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>
#include <cctype>
using namespace std;

string toLower(const string& str){
    string lowerStr = str;
    for(char& c : lowerStr){
        c = tolower(c);
    }
    return lowerStr;
}

void quicksort(int inicio, int fim, vector<pair<string, string>>& v){
    int i,j;
    i=inicio;
    j=fim;
    string pivo = v[(i+j)/2].second;
    while(i <= j){
        while(v[i].second < pivo) i++;
        while(v[j].second > pivo) j--;

        if(i <= j){
            swap(v[i], v[j]);
            i++;
            j--;
        }
    }
    if(i < fim) quicksort(i,fim, v);
    if(inicio < j) quicksort(inicio, j, v);
}

int main() {
    vector<pair<string, string>>names;
    string name;
    while(getline(cin, name)){
        names.push_back({name, toLower(name)});
    }

    quicksort(0, names.size() - 1, names);

    cout << names[names.size() - 1].first << endl;
    return 0;
}
