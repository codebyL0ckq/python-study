// 2356 - Bacteria I 
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s,sub;
    while(getline(cin, s) && getline(cin, sub)){
        size_t exist = s.find(sub);
        if(exist == string::npos) cout << "Nao resistente\n";
        else cout << "Resistente\n";
    }
    return 0;
}
