// 2651 - Upset Link 
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>
using namespace std;

void to_Lower(string *s){
    for(char &c : *s){
        c = tolower(c);
    }
}

int main(){
    string in;
    getline(cin, in);
    to_Lower(&in);
    if(in.find("zelda") != string::npos) cout << "Link Bolado" << endl;
    else cout << "Link Tranquilo" << endl;
    return 0;
}
