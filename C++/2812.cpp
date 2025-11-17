// 2812 - Laércio 
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <iomanip>
#include <map>
#include <set>
using namespace std;

int main(){
    int n,m,number;
    vector<int> odd;
    cin >> n;
    while(n--){
        odd.clear();
        cin >> m;
        while(m--){
            cin >> number;
            if(number % 2 != 0)odd.push_back(number);
        }
        
        if(odd.size() == 0){
            cout << endl;
            continue;
        }

        sort(odd.begin(),odd.end());
        
        int left,right;
        left = 0;
        right = odd.size() - 1;
        bool space = false;

        while(left <= right){
            if(space) cout << " ";
            cout << odd[right--];
            space = true;

            if(left <= right) cout << " " << odd[left++];
        }
        cout << endl;
    }
    return 0;
}
